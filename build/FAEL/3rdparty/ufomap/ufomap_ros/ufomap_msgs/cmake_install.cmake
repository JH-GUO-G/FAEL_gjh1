# Install script for directory: /home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/gjh/FAEL/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ufomap_msgs/msg" TYPE FILE FILES
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/AABB.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/BoundingVolume.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/Frustum.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/LineSegment.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/OBB.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/Plane.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/Point.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/Ray.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/Sphere.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/UFOMap.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/UFOMapMetaData.msg"
    "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/msg/UFOMapStamped.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ufomap_msgs/cmake" TYPE FILE FILES "/home/gjh/FAEL/build/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/catkin_generated/installspace/ufomap_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/gjh/FAEL/devel/include/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/gjh/FAEL/devel/share/roseus/ros/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/gjh/FAEL/devel/share/common-lisp/ros/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/gjh/FAEL/devel/share/gennodejs/ros/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/gjh/FAEL/devel/lib/python3/dist-packages/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/gjh/FAEL/devel/lib/python3/dist-packages/ufomap_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/gjh/FAEL/build/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/catkin_generated/installspace/ufomap_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ufomap_msgs/cmake" TYPE FILE FILES "/home/gjh/FAEL/build/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/catkin_generated/installspace/ufomap_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ufomap_msgs/cmake" TYPE FILE FILES
    "/home/gjh/FAEL/build/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/catkin_generated/installspace/ufomap_msgsConfig.cmake"
    "/home/gjh/FAEL/build/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/catkin_generated/installspace/ufomap_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ufomap_msgs" TYPE FILE FILES "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/gjh/FAEL/devel/lib/libufomap_msgs.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ufomap_msgs" TYPE DIRECTORY FILES "/home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_msgs/include/ufomap_msgs/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

