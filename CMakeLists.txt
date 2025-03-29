cmake_minimum_required(VERSION 3.10)

project(OS VERSION 1.0 LANGUAGES C CXX ASM)

enable_language(ASM_NASM)

set(CMAKE_C_COMPILER /usr/bin/x86_64-linux-gnu-gcc-11)
set(CMAKE_CXX_COMPILER /usr/bin/x86_64-linux-gnu-g++-11)
set(CMAKE_ASM_NASM_COMPILER /usr/bin/nasm)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_C_FLAGS "-lgcc -Wl,--export-dynamic -Wall -O0 -fno-stack-protector -Wextra -ffreestanding -fno-stack-check -fno-lto -ffunction-sections -fdata-sections -m64 -msse -mno-mmx -mno-sse2 -fno-pic -mno-sse3 -mno-ssse3 -mno-avx -mno-avx2 -mno-avx512f -mno-red-zone -march=x86-64 -static -Wformat-security -Wformat -g -mcmodel=kernel")
set(CMAKE_CXX_FLAGS "-lgcc -Wl,--export-dynamic -fpermissive -fno-rtti -Wall -O0 -fno-stack-protector -Wextra -ffreestanding -fno-stack-check -fno-lto -ffunction-sections -fdata-sections -fno-exceptions -fno-pic -m64 -msse -mno-mmx -mno-sse2 -mno-sse3 -mno-ssse3 -mno-avx -mno-avx2 -mno-avx512f -mno-red-zone -march=x86-64 -fno-threadsafe-statics -std=c++20 -Wformat-security -Wformat -g -mcmodel=kernel")
set(CMAKE_EXE_LINKER_FLAGS "-lgcc -nostdlib -static -z text -T ../x86_64-linker.ld -Wl,--export-dynamic -z max-page-size=0x1000")
set(CMAKE_ASM_NASM_FLAGS "-f elf64")


file(GLOB_RECURSE SOURCES
        "src/*.c"
        "src/*.cpp"
        "src/*.asm"
        "src/*.h"
)

add_executable(OS
        ${SOURCES}
        src/init/start.asm
        src/main.c
        src/3rd-party/nanoprintf.c
        src/3rd-party/nanoprintf.h
        src/3rd-party/rt.c
        src/hal/io.h
        src/hal/msr.h
        src/mm/physical.c
        src/mm/physical.h
        limine/limine.h
        src/mm/common.c
        src/mm/common.h
        src/kernel.h
)

include_directories(OS PRIVATE src)
include_directories(OS PRIVATE limine/)

add_custom_target(PostBuild ALL
        COMMAND ${CMAKE_COMMAND} -E rename OS kernel.elf
        COMMAND chmod +x ../iso.sh
        COMMAND ../iso.sh
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Post-build: Renaming OS to kernel.elf and invoking iso.sh"
        DEPENDS OS
)

add_custom_target(PerformAll ALL
    COMMAND qemu-system-x86_64.exe -cpu qemu64,+fsgsbase,+syscall -M smm=off -smp 6 -M q35 -m 2G -debugcon stdio -cdrom image.iso -drive if=pflash,unit=0,format=raw,file=./ovmf/ovmf-code-x86_64.fd,readonly=on -drive if=pflash,unit=1,format=raw,file=./ovmf/ovmf-vars-x86_64.fd
    DEPENDS PostBuild
)
