//
// Created by Neko on 29.03.2025.
//

#include <mm/physical.h>
#include <stdio.h>
void kernel_main(void)
{
    initialize_physical_memory();
    printf("Hello, World!\n");

    void* page = allocate_page();
    printf("%p\n", page);

    while (1)
    {
        asm volatile ("cli; hlt");
    }
}