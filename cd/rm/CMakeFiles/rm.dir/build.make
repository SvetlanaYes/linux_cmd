# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /snap/cmake/955/bin/cmake

# The command to remove a file.
RM = /snap/cmake/955/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/svetlana/linux_cmd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/svetlana/linux_cmd/cd

# Include any dependencies generated for this target.
include rm/CMakeFiles/rm.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include rm/CMakeFiles/rm.dir/compiler_depend.make

# Include the progress variables for this target.
include rm/CMakeFiles/rm.dir/progress.make

# Include the compile flags for this target's objects.
include rm/CMakeFiles/rm.dir/flags.make

rm/CMakeFiles/rm.dir/rm.c.o: rm/CMakeFiles/rm.dir/flags.make
rm/CMakeFiles/rm.dir/rm.c.o: ../rm/rm.c
rm/CMakeFiles/rm.dir/rm.c.o: rm/CMakeFiles/rm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/svetlana/linux_cmd/cd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object rm/CMakeFiles/rm.dir/rm.c.o"
	cd /home/svetlana/linux_cmd/cd/rm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT rm/CMakeFiles/rm.dir/rm.c.o -MF CMakeFiles/rm.dir/rm.c.o.d -o CMakeFiles/rm.dir/rm.c.o -c /home/svetlana/linux_cmd/rm/rm.c

rm/CMakeFiles/rm.dir/rm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rm.dir/rm.c.i"
	cd /home/svetlana/linux_cmd/cd/rm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/svetlana/linux_cmd/rm/rm.c > CMakeFiles/rm.dir/rm.c.i

rm/CMakeFiles/rm.dir/rm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rm.dir/rm.c.s"
	cd /home/svetlana/linux_cmd/cd/rm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/svetlana/linux_cmd/rm/rm.c -o CMakeFiles/rm.dir/rm.c.s

# Object files for target rm
rm_OBJECTS = \
"CMakeFiles/rm.dir/rm.c.o"

# External object files for target rm
rm_EXTERNAL_OBJECTS =

rm/rm: rm/CMakeFiles/rm.dir/rm.c.o
rm/rm: rm/CMakeFiles/rm.dir/build.make
rm/rm: rm/CMakeFiles/rm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/svetlana/linux_cmd/cd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable rm"
	cd /home/svetlana/linux_cmd/cd/rm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
rm/CMakeFiles/rm.dir/build: rm/rm
.PHONY : rm/CMakeFiles/rm.dir/build

rm/CMakeFiles/rm.dir/clean:
	cd /home/svetlana/linux_cmd/cd/rm && $(CMAKE_COMMAND) -P CMakeFiles/rm.dir/cmake_clean.cmake
.PHONY : rm/CMakeFiles/rm.dir/clean

rm/CMakeFiles/rm.dir/depend:
	cd /home/svetlana/linux_cmd/cd && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/svetlana/linux_cmd /home/svetlana/linux_cmd/rm /home/svetlana/linux_cmd/cd /home/svetlana/linux_cmd/cd/rm /home/svetlana/linux_cmd/cd/rm/CMakeFiles/rm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rm/CMakeFiles/rm.dir/depend

