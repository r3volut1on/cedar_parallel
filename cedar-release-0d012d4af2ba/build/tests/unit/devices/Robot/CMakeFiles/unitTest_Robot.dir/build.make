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
include tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/depend.make

# Include the progress variables for this target.
include tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/flags.make

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/flags.make
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o: ../tests/unit/devices/Robot/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unitTest_Robot.dir/main.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/main.cpp

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unitTest_Robot.dir/main.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/main.cpp > CMakeFiles/unitTest_Robot.dir/main.cpp.i

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unitTest_Robot.dir/main.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/main.cpp -o CMakeFiles/unitTest_Robot.dir/main.cpp.s

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.requires:

.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.requires

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.provides: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.requires
	$(MAKE) -f tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build.make tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.provides.build
.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.provides

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.provides.build: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o


tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/flags.make
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o: ../tests/unit/devices/Robot/TestChannel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestChannel.cpp

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestChannel.cpp > CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.i

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestChannel.cpp -o CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.s

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.requires:

.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.requires

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.provides: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.requires
	$(MAKE) -f tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build.make tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.provides.build
.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.provides

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.provides.build: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o


tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/flags.make
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o: ../tests/unit/devices/Robot/TestComponent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestComponent.cpp

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestComponent.cpp > CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.i

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot/TestComponent.cpp -o CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.s

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.requires:

.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.requires

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.provides: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.requires
	$(MAKE) -f tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build.make tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.provides.build
.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.provides

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.provides.build: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o


# Object files for target unitTest_Robot
unitTest_Robot_OBJECTS = \
"CMakeFiles/unitTest_Robot.dir/main.cpp.o" \
"CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o" \
"CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o"

# External object files for target unitTest_Robot
unitTest_Robot_EXTERNAL_OBJECTS =

../bin/unitTest/devices/unitTest_Robot: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o
../bin/unitTest/devices/unitTest_Robot: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o
../bin/unitTest/devices/unitTest_Robot: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o
../bin/unitTest/devices/unitTest_Robot: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build.make
../bin/unitTest/devices/unitTest_Robot: ../lib/libcedardev.so.5.1.0
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/libqwt-qt4.so
../bin/unitTest/devices/unitTest_Robot: /usr/local/lib/libqwtplot3d.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/devices/unitTest_Robot: ../lib/libcedaraux.so.5.1.0
../bin/unitTest/devices/unitTest_Robot: ../lib/libcedarunits.so.5.1.0
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/libqwt-qt4.so
../bin/unitTest/devices/unitTest_Robot: /usr/local/lib/libqwtplot3d.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/devices/unitTest_Robot: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/devices/unitTest_Robot: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../../../../bin/unitTest/devices/unitTest_Robot"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unitTest_Robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build: ../bin/unitTest/devices/unitTest_Robot

.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/build

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/requires: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/main.cpp.o.requires
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/requires: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestChannel.cpp.o.requires
tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/requires: tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/TestComponent.cpp.o.requires

.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/requires

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/clean:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot && $(CMAKE_COMMAND) -P CMakeFiles/unitTest_Robot.dir/cmake_clean.cmake
.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/clean

tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/depend:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/tests/unit/devices/Robot /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/unit/devices/Robot/CMakeFiles/unitTest_Robot.dir/depend

