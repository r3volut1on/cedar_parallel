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
include executables/cedar/CMakeFiles/cedar.dir/depend.make

# Include the progress variables for this target.
include executables/cedar/CMakeFiles/cedar.dir/progress.make

# Include the compile flags for this target's objects.
include executables/cedar/CMakeFiles/cedar.dir/flags.make

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o: executables/cedar/CMakeFiles/cedar.dir/flags.make
executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o: ../executables/cedar/cedar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cedar.dir/cedar.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar/cedar.cpp

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedar.dir/cedar.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar/cedar.cpp > CMakeFiles/cedar.dir/cedar.cpp.i

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedar.dir/cedar.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar/cedar.cpp -o CMakeFiles/cedar.dir/cedar.cpp.s

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.requires:

.PHONY : executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.requires

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.provides: executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.requires
	$(MAKE) -f executables/cedar/CMakeFiles/cedar.dir/build.make executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.provides.build
.PHONY : executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.provides

executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.provides.build: executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o


# Object files for target cedar
cedar_OBJECTS = \
"CMakeFiles/cedar.dir/cedar.cpp.o"

# External object files for target cedar
cedar_EXTERNAL_OBJECTS =

../bin/cedar-5.1.0: executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o
../bin/cedar-5.1.0: executables/cedar/CMakeFiles/cedar.dir/build.make
../bin/cedar-5.1.0: ../lib/libcedardyn.so.5.1.0
../bin/cedar-5.1.0: ../lib/libcedarproc.so.5.1.0
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/cedar-5.1.0: /usr/lib/libqwt-qt4.so
../bin/cedar-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-5.1.0: ../lib/libcedardev.so.5.1.0
../bin/cedar-5.1.0: ../lib/libcedaraux.so.5.1.0
../bin/cedar-5.1.0: ../lib/libcedarunits.so.5.1.0
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/cedar-5.1.0: /usr/lib/libqwt-qt4.so
../bin/cedar-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-5.1.0: executables/cedar/CMakeFiles/cedar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/cedar"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cedar.dir/link.txt --verbose=$(VERBOSE)
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && $(CMAKE_COMMAND) -E cmake_symlink_executable ../../../bin/cedar-5.1.0 ../../../bin/cedar

../bin/cedar: ../bin/cedar-5.1.0


# Rule to build all files generated by this target.
executables/cedar/CMakeFiles/cedar.dir/build: ../bin/cedar

.PHONY : executables/cedar/CMakeFiles/cedar.dir/build

executables/cedar/CMakeFiles/cedar.dir/requires: executables/cedar/CMakeFiles/cedar.dir/cedar.cpp.o.requires

.PHONY : executables/cedar/CMakeFiles/cedar.dir/requires

executables/cedar/CMakeFiles/cedar.dir/clean:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar && $(CMAKE_COMMAND) -P CMakeFiles/cedar.dir/cmake_clean.cmake
.PHONY : executables/cedar/CMakeFiles/cedar.dir/clean

executables/cedar/CMakeFiles/cedar.dir/depend:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar/CMakeFiles/cedar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : executables/cedar/CMakeFiles/cedar.dir/depend

