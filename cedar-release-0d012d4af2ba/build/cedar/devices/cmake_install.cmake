# Install script for directory: /home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Odometry.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/KukaArm.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/PowerCube110.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/AmtecChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/KinematicChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/Sdh.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/CoraArm.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/CoraHead.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/Caren.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gl" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gl/PowerCubeWrist90.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/ComponentSlot.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/SimulatedKinematicChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/exceptions.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/Property.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/Decoding.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/PropertyMode.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/Setting.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/IsoSpeed.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/FrameRate.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/enums/VideoMode.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/Properties.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/exceptions.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/Grabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/Channel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/CamProperty.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/BackendType.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/BackendV4L.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/Backend.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/BackendDc1394.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/BackendCvVideoCapture.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/camera/backends/LibDcBase.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/NetChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/exceptions.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/GLGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/Grabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/VideoChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/NetGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/GrabbableChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/PictureChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/PictureGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/GrabberChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/RecordingFormat.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/GLChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/VideoGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors/visual" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual/GrabbableGrabber.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/sensors" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/sensors/visual.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/KinematicChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/YarpChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/NetworkChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/amtec" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/amtec/KinematicChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/amtec" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/amtec/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/communication" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/communication/Communication.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/communication" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/communication/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/communication/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/communication/gui/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Component.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Robot.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Channel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kuka" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kuka/KinematicChain.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kuka" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kuka/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kuka/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kuka/gui/FriStatusWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kuka/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kuka/gui/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/robot" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/robot/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/DifferentialDrive.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/RobotManager.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/KinematicChainMonitorWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/KinematicChainWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/KinematicChainCommandWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/MountedCameraViewer.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/RobotManager.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/ComponentParameter.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/gui/RobotCard.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/ComponentParameter.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Sensor.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/Locomotion.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/Odometry.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/Led.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/InfraredSensorYarp.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/khepera/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/khepera/GripperSerial.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/khepera/Gripper.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/serialChannelHelperFunctions.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/LedSerial.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/Drive.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/gui/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/gui/DriveControlWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/DriveSerial.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/InfraredSensorSerial.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/epuck/YarpDrive.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/epuck/AccelerationSensorSerial.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/epuck/namespace.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/kteam/SerialChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/cedar/devices/SerialChannel.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kuka/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/cedar/devices/kuka/gui/ui_FriStatusWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/cedar/devices/gui/ui_RobotManager.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices/kteam/gui" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/cedar/devices/kteam/gui/ui_DriveControlWidget.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-5.1.0/devices" TYPE FILE FILES "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/build/cedar/devices/lib.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so.5.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/lib/libcedardev.so.5.1.0"
    "/home/promethean/Desktop/tim-test/cedar_parallel/cedar-release-0d012d4af2ba/lib/libcedardev.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so.5.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so"
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

