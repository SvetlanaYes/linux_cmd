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
include cd/CMakeFiles/cd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include cd/CMakeFiles/cd.dir/compiler_depend.make

# Include the progress variables for this target.
include cd/CMakeFiles/cd.dir/progress.make

# Include the compile flags for this target's objects.
include cd/CMakeFiles/cd.dir/flags.make

cd/CMakeFiles/cd.dir/cd.c.o: cd/CMakeFiles/cd.dir/flags.make
cd/CMakeFiles/cd.dir/cd.c.o: cd.c
cd/CMakeFiles/cd.dir/cd.c.o: cd/CMakeFiles/cd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/svetlana/linux_cmd/cd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object cd/CMakeFiles/cd.dir/cd.c.o"
	cd /home/svetlana/linux_cmd/cd/cd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT cd/CMakeFiles/cd.dir/cd.c.o -MF CMakeFiles/cd.dir/cd.c.o.d -o CMakeFiles/cd.dir/cd.c.o -c /home/svetlana/linux_cmd/cd/cd.c

cd/CMakeFiles/cd.dir/cd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cd.dir/cd.c.i"
	cd /home/svetlana/linux_cmd/cd/cd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/svetlana/linux_cmd/cd/cd.c > CMakeFiles/cd.dir/cd.c.i

cd/CMakeFiles/cd.dir/cd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cd.dir/cd.c.s"
	cd /home/svetlana/linux_cmd/cd/cd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/svetlana/linux_cmd/cd/cd.c -o CMakeFiles/cd.dir/cd.c.s

# Object files for target cd
cd_OBJECTS = \
"CMakeFiles/cd.dir/cd.c.o"

# External object files for target cd
cd_EXTERNAL_OBJECTS =

cd/cd: cd/CMakeFiles/cd.dir/cd.c.o
cd/cd: cd/CMakeFiles/cd.dir/build.make
cd/cd: cd/CMakeFiles/cd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/svetlana/linux_cmd/cd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cd"
	cd /home/svetlana/linux_cmd/cd/cd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cd/CMakeFiles/cd.dir/build: cd/cd
.PHONY : cd/CMakeFiles/cd.dir/build

cd/CMakeFiles/cd.dir/clean:
	cd /home/svetlana/linux_cmd/cd/cd && $(CMAKE_COMMAND) -P CMakeFiles/cd.dir/cmake_clean.cmake
.PHONY : cd/CMakeFiles/cd.dir/clean

cd/CMakeFiles/cd.dir/depend:
	cd /home/svetlana/linux_cmd/cd && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/svetlana/linux_cmd /home/svetlana/linux_cmd/cd /home/svetlana/linux_cmd/cd /home/svetlana/linux_cmd/cd/cd /home/svetlana/linux_cmd/cd/cd/CMakeFiles/cd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cd/CMakeFiles/cd.dir/depend

