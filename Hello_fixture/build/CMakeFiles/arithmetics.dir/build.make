# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jimenez/Google_test/Hello_fixture

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jimenez/Google_test/Hello_fixture/build

# Include any dependencies generated for this target.
include CMakeFiles/arithmetics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arithmetics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arithmetics.dir/flags.make

CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o: CMakeFiles/arithmetics.dir/flags.make
CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o: ../unittest_arithmetics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jimenez/Google_test/Hello_fixture/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o -c /home/jimenez/Google_test/Hello_fixture/unittest_arithmetics.cpp

CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jimenez/Google_test/Hello_fixture/unittest_arithmetics.cpp > CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.i

CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jimenez/Google_test/Hello_fixture/unittest_arithmetics.cpp -o CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.s

# Object files for target arithmetics
arithmetics_OBJECTS = \
"CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o"

# External object files for target arithmetics
arithmetics_EXTERNAL_OBJECTS =

arithmetics: CMakeFiles/arithmetics.dir/unittest_arithmetics.cpp.o
arithmetics: CMakeFiles/arithmetics.dir/build.make
arithmetics: lib/libgtest_main.a
arithmetics: lib/libgtest.a
arithmetics: CMakeFiles/arithmetics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jimenez/Google_test/Hello_fixture/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arithmetics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arithmetics.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=arithmetics -D TEST_EXECUTABLE=/home/jimenez/Google_test/Hello_fixture/build/arithmetics -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/jimenez/Google_test/Hello_fixture/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=arithmetics_TESTS -D CTEST_FILE=/home/jimenez/Google_test/Hello_fixture/build/arithmetics[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -P /usr/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/arithmetics.dir/build: arithmetics

.PHONY : CMakeFiles/arithmetics.dir/build

CMakeFiles/arithmetics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arithmetics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arithmetics.dir/clean

CMakeFiles/arithmetics.dir/depend:
	cd /home/jimenez/Google_test/Hello_fixture/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jimenez/Google_test/Hello_fixture /home/jimenez/Google_test/Hello_fixture /home/jimenez/Google_test/Hello_fixture/build /home/jimenez/Google_test/Hello_fixture/build /home/jimenez/Google_test/Hello_fixture/build/CMakeFiles/arithmetics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arithmetics.dir/depend
