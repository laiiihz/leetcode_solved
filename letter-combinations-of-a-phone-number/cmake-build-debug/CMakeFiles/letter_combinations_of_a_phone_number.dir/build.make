# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/laihz/Apps/jetbrains/apps/CLion/ch-0/182.4892.24/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/laihz/Apps/jetbrains/apps/CLion/ch-0/182.4892.24/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/letter_combinations_of_a_phone_number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/letter_combinations_of_a_phone_number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/letter_combinations_of_a_phone_number.dir/flags.make

CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o: CMakeFiles/letter_combinations_of_a_phone_number.dir/flags.make
CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o -c /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/main.cpp

CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/main.cpp > CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.i

CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/main.cpp -o CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.s

# Object files for target letter_combinations_of_a_phone_number
letter_combinations_of_a_phone_number_OBJECTS = \
"CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o"

# External object files for target letter_combinations_of_a_phone_number
letter_combinations_of_a_phone_number_EXTERNAL_OBJECTS =

letter_combinations_of_a_phone_number: CMakeFiles/letter_combinations_of_a_phone_number.dir/main.cpp.o
letter_combinations_of_a_phone_number: CMakeFiles/letter_combinations_of_a_phone_number.dir/build.make
letter_combinations_of_a_phone_number: CMakeFiles/letter_combinations_of_a_phone_number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable letter_combinations_of_a_phone_number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/letter_combinations_of_a_phone_number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/letter_combinations_of_a_phone_number.dir/build: letter_combinations_of_a_phone_number

.PHONY : CMakeFiles/letter_combinations_of_a_phone_number.dir/build

CMakeFiles/letter_combinations_of_a_phone_number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/letter_combinations_of_a_phone_number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/letter_combinations_of_a_phone_number.dir/clean

CMakeFiles/letter_combinations_of_a_phone_number.dir/depend:
	cd /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug /home/laihz/CLionProjects/leetcode/letter-combinations-of-a-phone-number/cmake-build-debug/CMakeFiles/letter_combinations_of_a_phone_number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/letter_combinations_of_a_phone_number.dir/depend
