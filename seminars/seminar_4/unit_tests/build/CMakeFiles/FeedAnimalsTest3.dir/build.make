# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/vadim/vk_ads/seminars/seminar_4/unit_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vadim/vk_ads/seminars/seminar_4/unit_tests/build

# Include any dependencies generated for this target.
include CMakeFiles/FeedAnimalsTest3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FeedAnimalsTest3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FeedAnimalsTest3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FeedAnimalsTest3.dir/flags.make

CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o: CMakeFiles/FeedAnimalsTest3.dir/flags.make
CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o: ../unit_tests.cpp
CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o: CMakeFiles/FeedAnimalsTest3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vadim/vk_ads/seminars/seminar_4/unit_tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o -MF CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o.d -o CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o -c /home/vadim/vk_ads/seminars/seminar_4/unit_tests/unit_tests.cpp

CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vadim/vk_ads/seminars/seminar_4/unit_tests/unit_tests.cpp > CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.i

CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vadim/vk_ads/seminars/seminar_4/unit_tests/unit_tests.cpp -o CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.s

# Object files for target FeedAnimalsTest3
FeedAnimalsTest3_OBJECTS = \
"CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o"

# External object files for target FeedAnimalsTest3
FeedAnimalsTest3_EXTERNAL_OBJECTS =

FeedAnimalsTest3: CMakeFiles/FeedAnimalsTest3.dir/unit_tests.cpp.o
FeedAnimalsTest3: CMakeFiles/FeedAnimalsTest3.dir/build.make
FeedAnimalsTest3: lib/libgtest_main.a
FeedAnimalsTest3: lib/libgtest.a
FeedAnimalsTest3: CMakeFiles/FeedAnimalsTest3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vadim/vk_ads/seminars/seminar_4/unit_tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FeedAnimalsTest3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FeedAnimalsTest3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FeedAnimalsTest3.dir/build: FeedAnimalsTest3
.PHONY : CMakeFiles/FeedAnimalsTest3.dir/build

CMakeFiles/FeedAnimalsTest3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FeedAnimalsTest3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FeedAnimalsTest3.dir/clean

CMakeFiles/FeedAnimalsTest3.dir/depend:
	cd /home/vadim/vk_ads/seminars/seminar_4/unit_tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vadim/vk_ads/seminars/seminar_4/unit_tests /home/vadim/vk_ads/seminars/seminar_4/unit_tests /home/vadim/vk_ads/seminars/seminar_4/unit_tests/build /home/vadim/vk_ads/seminars/seminar_4/unit_tests/build /home/vadim/vk_ads/seminars/seminar_4/unit_tests/build/CMakeFiles/FeedAnimalsTest3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FeedAnimalsTest3.dir/depend

