# Install script for directory: /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/measurementFunctions.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/devices/TestChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/devices/TestGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/devices/TestChannel.fwd.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/devices/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/testingUtilities/devices/TestGrabber.fwd.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/testingUtilities" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/cedar/testingUtilities/lib.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedartesting_utilities.so.5.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedartesting_utilities.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/lib/libcedartesting_utilities.so.5.1.0"
    "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/lib/libcedartesting_utilities.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedartesting_utilities.so.5.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedartesting_utilities.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

