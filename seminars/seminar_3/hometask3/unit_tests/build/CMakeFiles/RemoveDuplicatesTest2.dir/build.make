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
CMAKE_SOURCE_DIR = /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build

# Include any dependencies generated for this target.
include CMakeFiles/RemoveDuplicatesTest2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RemoveDuplicatesTest2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RemoveDuplicatesTest2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RemoveDuplicatesTest2.dir/flags.make

CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o: CMakeFiles/RemoveDuplicatesTest2.dir/flags.make
CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o: ../unit_tests.cpp
CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o: CMakeFiles/RemoveDuplicatesTest2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o -MF CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o.d -o CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o -c /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/unit_tests.cpp

CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/unit_tests.cpp > CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.i

CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/unit_tests.cpp -o CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.s

# Object files for target RemoveDuplicatesTest2
RemoveDuplicatesTest2_OBJECTS = \
"CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o"

# External object files for target RemoveDuplicatesTest2
RemoveDuplicatesTest2_EXTERNAL_OBJECTS =

RemoveDuplicatesTest2: CMakeFiles/RemoveDuplicatesTest2.dir/unit_tests.cpp.o
RemoveDuplicatesTest2: CMakeFiles/RemoveDuplicatesTest2.dir/build.make
RemoveDuplicatesTest2: lib/libgtest_main.a
RemoveDuplicatesTest2: lib/libgtest.a
RemoveDuplicatesTest2: CMakeFiles/RemoveDuplicatesTest2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RemoveDuplicatesTest2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RemoveDuplicatesTest2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RemoveDuplicatesTest2.dir/build: RemoveDuplicatesTest2
.PHONY : CMakeFiles/RemoveDuplicatesTest2.dir/build

CMakeFiles/RemoveDuplicatesTest2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RemoveDuplicatesTest2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RemoveDuplicatesTest2.dir/clean

CMakeFiles/RemoveDuplicatesTest2.dir/depend:
	cd /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build /home/vadim/vk_ads/seminars/seminar_3/hometask3/unit_tests/build/CMakeFiles/RemoveDuplicatesTest2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RemoveDuplicatesTest2.dir/depend
