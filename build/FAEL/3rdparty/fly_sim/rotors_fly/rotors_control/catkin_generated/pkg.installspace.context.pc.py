# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;mav_msgs;nav_msgs;roscpp;sensor_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-llee_position_controller;-lroll_pitch_yawrate_thrust_controller".split(';') if "-llee_position_controller;-lroll_pitch_yawrate_thrust_controller" != "" else []
PROJECT_NAME = "rotors_control"
PROJECT_SPACE_DIR = "/home/gjh/FAEL/install"
PROJECT_VERSION = "2.2.3"
