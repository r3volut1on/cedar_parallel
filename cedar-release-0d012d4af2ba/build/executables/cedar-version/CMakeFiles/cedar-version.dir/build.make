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
include executables/cedar-version/CMakeFiles/cedar-version.dir/depend.make

# Include the progress variables for this target.
include executables/cedar-version/CMakeFiles/cedar-version.dir/progress.make

# Include the compile flags for this target's objects.
include executables/cedar-version/CMakeFiles/cedar-version.dir/flags.make

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o: executables/cedar-version/CMakeFiles/cedar-version.dir/flags.make
executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o: ../executables/cedar-version/cedar-version.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cedar-version.dir/cedar-version.cpp.o -c /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar-version/cedar-version.cpp

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedar-version.dir/cedar-version.cpp.i"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar-version/cedar-version.cpp > CMakeFiles/cedar-version.dir/cedar-version.cpp.i

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedar-version.dir/cedar-version.cpp.s"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar-version/cedar-version.cpp -o CMakeFiles/cedar-version.dir/cedar-version.cpp.s

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.requires:

.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.requires

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.provides: executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.requires
	$(MAKE) -f executables/cedar-version/CMakeFiles/cedar-version.dir/build.make executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.provides.build
.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.provides

executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.provides.build: executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o


# Object files for target cedar-version
cedar__version_OBJECTS = \
"CMakeFiles/cedar-version.dir/cedar-version.cpp.o"

# External object files for target cedar-version
cedar__version_EXTERNAL_OBJECTS =

../bin/cedar-version-5.1.0: executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o
../bin/cedar-version-5.1.0: executables/cedar-version/CMakeFiles/cedar-version.dir/build.make
../bin/cedar-version-5.1.0: ../lib/libcedardyn.so.5.1.0
../bin/cedar-version-5.1.0: ../lib/libcedarproc.so.5.1.0
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/cedar-version-5.1.0: /usr/lib/libqwt-qt4.so
../bin/cedar-version-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-version-5.1.0: ../lib/libcedardev.so.5.1.0
../bin/cedar-version-5.1.0: ../lib/libcedaraux.so.5.1.0
../bin/cedar-version-5.1.0: ../lib/libcedarunits.so.5.1.0
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libQGLViewer-qt4.so
../bin/cedar-version-5.1.0: /usr/lib/libqwt-qt4.so
../bin/cedar-version-5.1.0: /usr/local/lib/libqwtplot3d.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-version-5.1.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-version-5.1.0: executables/cedar-version/CMakeFiles/cedar-version.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/cedar-version"
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cedar-version.dir/link.txt --verbose=$(VERBOSE)
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && $(CMAKE_COMMAND) -E cmake_symlink_executable ../../../bin/cedar-version-5.1.0 ../../../bin/cedar-version

../bin/cedar-version: ../bin/cedar-version-5.1.0


# Rule to build all files generated by this target.
executables/cedar-version/CMakeFiles/cedar-version.dir/build: ../bin/cedar-version

.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/build

executables/cedar-version/CMakeFiles/cedar-version.dir/requires: executables/cedar-version/CMakeFiles/cedar-version.dir/cedar-version.cpp.o.requires

.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/requires

executables/cedar-version/CMakeFiles/cedar-version.dir/clean:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version && $(CMAKE_COMMAND) -P CMakeFiles/cedar-version.dir/cmake_clean.cmake
.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/clean

executables/cedar-version/CMakeFiles/cedar-version.dir/depend:
	cd /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/executables/cedar-version /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/executables/cedar-version/CMakeFiles/cedar-version.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : executables/cedar-version/CMakeFiles/cedar-version.dir/depend
