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
include examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/depend.make

# Include the progress variables for this target.
include examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/progress.make

# Include the compile flags for this target's objects.
include examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/flags.make

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/flags.make
examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o: ../examples/auxiliaries/Configurable/Tutorial/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConfigurableTutorial.dir/main.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/examples/auxiliaries/Configurable/Tutorial/main.cpp

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConfigurableTutorial.dir/main.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/examples/auxiliaries/Configurable/Tutorial/main.cpp > CMakeFiles/ConfigurableTutorial.dir/main.cpp.i

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConfigurableTutorial.dir/main.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/examples/auxiliaries/Configurable/Tutorial/main.cpp -o CMakeFiles/ConfigurableTutorial.dir/main.cpp.s

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.requires:

.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.requires

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.provides: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.requires
	$(MAKE) -f examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/build.make examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.provides.build
.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.provides

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.provides.build: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o


# Object files for target ConfigurableTutorial
ConfigurableTutorial_OBJECTS = \
"CMakeFiles/ConfigurableTutorial.dir/main.cpp.o"

# External object files for target ConfigurableTutorial
ConfigurableTutorial_EXTERNAL_OBJECTS =

../bin/examples/ConfigurableTutorial-5.1.0: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o
../bin/examples/ConfigurableTutorial-5.1.0: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/build.make
../bin/examples/ConfigurableTutorial-5.1.0: ../lib/libcedardyn.so.5.1.0
../bin/examples/ConfigurableTutorial-5.1.0: ../lib/libcedarproc.so.5.1.0
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/libqwt-qt4.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/examples/ConfigurableTutorial-5.1.0: ../lib/libcedardev.so.5.1.0
../bin/examples/ConfigurableTutorial-5.1.0: ../lib/libcedaraux.so.5.1.0
../bin/examples/ConfigurableTutorial-5.1.0: ../lib/libcedarunits.so.5.1.0
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/libqwt-qt4.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/examples/ConfigurableTutorial-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/examples/ConfigurableTutorial-5.1.0: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../../bin/examples/ConfigurableTutorial"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ConfigurableTutorial.dir/link.txt --verbose=$(VERBOSE)
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && $(CMAKE_COMMAND) -E cmake_symlink_executable ../../../../../bin/examples/ConfigurableTutorial-5.1.0 ../../../../../bin/examples/ConfigurableTutorial

../bin/examples/ConfigurableTutorial: ../bin/examples/ConfigurableTutorial-5.1.0


# Rule to build all files generated by this target.
examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/build: ../bin/examples/ConfigurableTutorial

.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/build

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/requires: examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/main.cpp.o.requires

.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/requires

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/clean:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial && $(CMAKE_COMMAND) -P CMakeFiles/ConfigurableTutorial.dir/cmake_clean.cmake
.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/clean

examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/depend:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/examples/auxiliaries/Configurable/Tutorial /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/auxiliaries/Configurable/Tutorial/CMakeFiles/ConfigurableTutorial.dir/depend
