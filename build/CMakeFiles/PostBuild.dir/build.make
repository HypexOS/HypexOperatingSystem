# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/OSWS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/OSWS/build

# Utility rule file for PostBuild.

# Include any custom commands dependencies for this target.
include CMakeFiles/PostBuild.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PostBuild.dir/progress.make

CMakeFiles/PostBuild: OS
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/c/OSWS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Post-build: Renaming OS to kernel.elf and invoking iso.sh"
	/usr/bin/cmake -E rename OS kernel.elf
	chmod +x ../iso.sh
	../iso.sh

PostBuild: CMakeFiles/PostBuild
PostBuild: CMakeFiles/PostBuild.dir/build.make
.PHONY : PostBuild

# Rule to build all files generated by this target.
CMakeFiles/PostBuild.dir/build: PostBuild
.PHONY : CMakeFiles/PostBuild.dir/build

CMakeFiles/PostBuild.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PostBuild.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PostBuild.dir/clean

CMakeFiles/PostBuild.dir/depend:
	cd /mnt/c/OSWS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/OSWS /mnt/c/OSWS /mnt/c/OSWS/build /mnt/c/OSWS/build /mnt/c/OSWS/build/CMakeFiles/PostBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PostBuild.dir/depend

