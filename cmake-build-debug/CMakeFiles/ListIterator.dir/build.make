# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/92/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/92/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vladimir/CLionProjects/ListIterator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vladimir/CLionProjects/ListIterator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ListIterator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ListIterator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ListIterator.dir/flags.make

CMakeFiles/ListIterator.dir/main.cpp.o: CMakeFiles/ListIterator.dir/flags.make
CMakeFiles/ListIterator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vladimir/CLionProjects/ListIterator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ListIterator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ListIterator.dir/main.cpp.o -c /home/vladimir/CLionProjects/ListIterator/main.cpp

CMakeFiles/ListIterator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ListIterator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vladimir/CLionProjects/ListIterator/main.cpp > CMakeFiles/ListIterator.dir/main.cpp.i

CMakeFiles/ListIterator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ListIterator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vladimir/CLionProjects/ListIterator/main.cpp -o CMakeFiles/ListIterator.dir/main.cpp.s

CMakeFiles/ListIterator.dir/s_list.cpp.o: CMakeFiles/ListIterator.dir/flags.make
CMakeFiles/ListIterator.dir/s_list.cpp.o: ../s_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vladimir/CLionProjects/ListIterator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ListIterator.dir/s_list.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ListIterator.dir/s_list.cpp.o -c /home/vladimir/CLionProjects/ListIterator/s_list.cpp

CMakeFiles/ListIterator.dir/s_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ListIterator.dir/s_list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vladimir/CLionProjects/ListIterator/s_list.cpp > CMakeFiles/ListIterator.dir/s_list.cpp.i

CMakeFiles/ListIterator.dir/s_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ListIterator.dir/s_list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vladimir/CLionProjects/ListIterator/s_list.cpp -o CMakeFiles/ListIterator.dir/s_list.cpp.s

CMakeFiles/ListIterator.dir/s_iterator.cpp.o: CMakeFiles/ListIterator.dir/flags.make
CMakeFiles/ListIterator.dir/s_iterator.cpp.o: ../s_iterator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vladimir/CLionProjects/ListIterator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ListIterator.dir/s_iterator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ListIterator.dir/s_iterator.cpp.o -c /home/vladimir/CLionProjects/ListIterator/s_iterator.cpp

CMakeFiles/ListIterator.dir/s_iterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ListIterator.dir/s_iterator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vladimir/CLionProjects/ListIterator/s_iterator.cpp > CMakeFiles/ListIterator.dir/s_iterator.cpp.i

CMakeFiles/ListIterator.dir/s_iterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ListIterator.dir/s_iterator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vladimir/CLionProjects/ListIterator/s_iterator.cpp -o CMakeFiles/ListIterator.dir/s_iterator.cpp.s

# Object files for target ListIterator
ListIterator_OBJECTS = \
"CMakeFiles/ListIterator.dir/main.cpp.o" \
"CMakeFiles/ListIterator.dir/s_list.cpp.o" \
"CMakeFiles/ListIterator.dir/s_iterator.cpp.o"

# External object files for target ListIterator
ListIterator_EXTERNAL_OBJECTS =

ListIterator: CMakeFiles/ListIterator.dir/main.cpp.o
ListIterator: CMakeFiles/ListIterator.dir/s_list.cpp.o
ListIterator: CMakeFiles/ListIterator.dir/s_iterator.cpp.o
ListIterator: CMakeFiles/ListIterator.dir/build.make
ListIterator: CMakeFiles/ListIterator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vladimir/CLionProjects/ListIterator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ListIterator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ListIterator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ListIterator.dir/build: ListIterator

.PHONY : CMakeFiles/ListIterator.dir/build

CMakeFiles/ListIterator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ListIterator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ListIterator.dir/clean

CMakeFiles/ListIterator.dir/depend:
	cd /home/vladimir/CLionProjects/ListIterator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vladimir/CLionProjects/ListIterator /home/vladimir/CLionProjects/ListIterator /home/vladimir/CLionProjects/ListIterator/cmake-build-debug /home/vladimir/CLionProjects/ListIterator/cmake-build-debug /home/vladimir/CLionProjects/ListIterator/cmake-build-debug/CMakeFiles/ListIterator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ListIterator.dir/depend
