# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build

# Include any dependencies generated for this target.
include tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/depend.make

# Include the progress variables for this target.
include tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/flags.make

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/flags.make
tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o: ../tests/unit/processing/Step/Step.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unitTest_Step.dir/Step.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/processing/Step/Step.cpp

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unitTest_Step.dir/Step.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/processing/Step/Step.cpp > CMakeFiles/unitTest_Step.dir/Step.cpp.i

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unitTest_Step.dir/Step.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/processing/Step/Step.cpp -o CMakeFiles/unitTest_Step.dir/Step.cpp.s

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.requires:

.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.requires

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.provides: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.requires
	$(MAKE) -f tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/build.make tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.provides.build
.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.provides

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.provides.build: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o


# Object files for target unitTest_Step
unitTest_Step_OBJECTS = \
"CMakeFiles/unitTest_Step.dir/Step.cpp.o"

# External object files for target unitTest_Step
unitTest_Step_EXTERNAL_OBJECTS =

../bin/unitTest/processing/unitTest_Step: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o
../bin/unitTest/processing/unitTest_Step: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/build.make
../bin/unitTest/processing/unitTest_Step: ../lib/libcedarproc.so.5.1.0
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/libqwt-qt4.so
../bin/unitTest/processing/unitTest_Step: /usr/local/lib/libqwtplot3d.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/processing/unitTest_Step: ../lib/libcedardev.so.5.1.0
../bin/unitTest/processing/unitTest_Step: ../lib/libcedaraux.so.5.1.0
../bin/unitTest/processing/unitTest_Step: ../lib/libcedarunits.so.5.1.0
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/libqwt-qt4.so
../bin/unitTest/processing/unitTest_Step: /usr/local/lib/libqwtplot3d.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/processing/unitTest_Step: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/processing/unitTest_Step: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../../bin/unitTest/processing/unitTest_Step"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unitTest_Step.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/build: ../bin/unitTest/processing/unitTest_Step

.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/build

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/requires: tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/Step.cpp.o.requires

.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/requires

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/clean:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step && $(CMAKE_COMMAND) -P CMakeFiles/unitTest_Step.dir/cmake_clean.cmake
.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/clean

tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/depend:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/processing/Step /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/unit/processing/Step/CMakeFiles/unitTest_Step.dir/depend

