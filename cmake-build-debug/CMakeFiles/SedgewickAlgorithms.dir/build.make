# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/aleksas/Загрузки/CLion-2021.2.3/clion-2021.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/aleksas/Загрузки/CLion-2021.2.3/clion-2021.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aleksas/CLionProjects/SedgewickAlgorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SedgewickAlgorithms.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SedgewickAlgorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SedgewickAlgorithms.dir/flags.make

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o: CMakeFiles/SedgewickAlgorithms.dir/flags.make
CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o: ../chapter01/program_one.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o -c /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_one.cpp

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.i"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_one.cpp > CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.i

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.s"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_one.cpp -o CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.s

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o: CMakeFiles/SedgewickAlgorithms.dir/flags.make
CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o: ../chapter01/program_two.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o -c /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_two.cpp

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.i"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_two.cpp > CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.i

CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.s"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleksas/CLionProjects/SedgewickAlgorithms/chapter01/program_two.cpp -o CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.s

# Object files for target SedgewickAlgorithms
SedgewickAlgorithms_OBJECTS = \
"CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o" \
"CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o"

# External object files for target SedgewickAlgorithms
SedgewickAlgorithms_EXTERNAL_OBJECTS =

SedgewickAlgorithms: CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_one.cpp.o
SedgewickAlgorithms: CMakeFiles/SedgewickAlgorithms.dir/chapter01/program_two.cpp.o
SedgewickAlgorithms: CMakeFiles/SedgewickAlgorithms.dir/build.make
SedgewickAlgorithms: CMakeFiles/SedgewickAlgorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SedgewickAlgorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SedgewickAlgorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SedgewickAlgorithms.dir/build: SedgewickAlgorithms
.PHONY : CMakeFiles/SedgewickAlgorithms.dir/build

CMakeFiles/SedgewickAlgorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SedgewickAlgorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SedgewickAlgorithms.dir/clean

CMakeFiles/SedgewickAlgorithms.dir/depend:
	cd /home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aleksas/CLionProjects/SedgewickAlgorithms /home/aleksas/CLionProjects/SedgewickAlgorithms /home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug /home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug /home/aleksas/CLionProjects/SedgewickAlgorithms/cmake-build-debug/CMakeFiles/SedgewickAlgorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SedgewickAlgorithms.dir/depend

