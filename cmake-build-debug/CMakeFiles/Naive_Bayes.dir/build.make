# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mathias/Documents/Naive-Bayes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mathias/Documents/Naive-Bayes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Naive_Bayes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Naive_Bayes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Naive_Bayes.dir/flags.make

CMakeFiles/Naive_Bayes.dir/main.cpp.o: CMakeFiles/Naive_Bayes.dir/flags.make
CMakeFiles/Naive_Bayes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Naive_Bayes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naive_Bayes.dir/main.cpp.o -c /home/mathias/Documents/Naive-Bayes/main.cpp

CMakeFiles/Naive_Bayes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naive_Bayes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mathias/Documents/Naive-Bayes/main.cpp > CMakeFiles/Naive_Bayes.dir/main.cpp.i

CMakeFiles/Naive_Bayes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naive_Bayes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mathias/Documents/Naive-Bayes/main.cpp -o CMakeFiles/Naive_Bayes.dir/main.cpp.s

CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o: CMakeFiles/Naive_Bayes.dir/flags.make
CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o: ../FrequencyTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o -c /home/mathias/Documents/Naive-Bayes/FrequencyTable.cpp

CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mathias/Documents/Naive-Bayes/FrequencyTable.cpp > CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.i

CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mathias/Documents/Naive-Bayes/FrequencyTable.cpp -o CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.s

CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o: CMakeFiles/Naive_Bayes.dir/flags.make
CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o: ../Classifier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o -c /home/mathias/Documents/Naive-Bayes/Classifier.cpp

CMakeFiles/Naive_Bayes.dir/Classifier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naive_Bayes.dir/Classifier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mathias/Documents/Naive-Bayes/Classifier.cpp > CMakeFiles/Naive_Bayes.dir/Classifier.cpp.i

CMakeFiles/Naive_Bayes.dir/Classifier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naive_Bayes.dir/Classifier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mathias/Documents/Naive-Bayes/Classifier.cpp -o CMakeFiles/Naive_Bayes.dir/Classifier.cpp.s

CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o: CMakeFiles/Naive_Bayes.dir/flags.make
CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o: ../LikelihoodTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o -c /home/mathias/Documents/Naive-Bayes/LikelihoodTable.cpp

CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mathias/Documents/Naive-Bayes/LikelihoodTable.cpp > CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.i

CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mathias/Documents/Naive-Bayes/LikelihoodTable.cpp -o CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.s

CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o: CMakeFiles/Naive_Bayes.dir/flags.make
CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o: ../BayesClassifier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o -c /home/mathias/Documents/Naive-Bayes/BayesClassifier.cpp

CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mathias/Documents/Naive-Bayes/BayesClassifier.cpp > CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.i

CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mathias/Documents/Naive-Bayes/BayesClassifier.cpp -o CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.s

# Object files for target Naive_Bayes
Naive_Bayes_OBJECTS = \
"CMakeFiles/Naive_Bayes.dir/main.cpp.o" \
"CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o" \
"CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o" \
"CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o" \
"CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o"

# External object files for target Naive_Bayes
Naive_Bayes_EXTERNAL_OBJECTS =

Naive_Bayes: CMakeFiles/Naive_Bayes.dir/main.cpp.o
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/FrequencyTable.cpp.o
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/Classifier.cpp.o
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/LikelihoodTable.cpp.o
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/BayesClassifier.cpp.o
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/build.make
Naive_Bayes: CMakeFiles/Naive_Bayes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Naive_Bayes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Naive_Bayes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Naive_Bayes.dir/build: Naive_Bayes

.PHONY : CMakeFiles/Naive_Bayes.dir/build

CMakeFiles/Naive_Bayes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Naive_Bayes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Naive_Bayes.dir/clean

CMakeFiles/Naive_Bayes.dir/depend:
	cd /home/mathias/Documents/Naive-Bayes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mathias/Documents/Naive-Bayes /home/mathias/Documents/Naive-Bayes /home/mathias/Documents/Naive-Bayes/cmake-build-debug /home/mathias/Documents/Naive-Bayes/cmake-build-debug /home/mathias/Documents/Naive-Bayes/cmake-build-debug/CMakeFiles/Naive_Bayes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Naive_Bayes.dir/depend

