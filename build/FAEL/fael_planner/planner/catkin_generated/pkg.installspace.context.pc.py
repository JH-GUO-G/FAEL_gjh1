# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "actionlib;actionlib_msgs;geometry_msgs;message_generation;move_base_msgs;nav_msgs;roscpp;sensor_msgs;std_srvs;tf;ufomap_manager;control_planner_interface;visualization_tools;traversability_analysis".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltopo_planner".split(';') if "-ltopo_planner" != "" else []
PROJECT_NAME = "planner"
PROJECT_SPACE_DIR = "/home/gjh/FAEL/install"
PROJECT_VERSION = "0.0.0"
