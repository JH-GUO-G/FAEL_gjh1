# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;roscpp;sensor_msgs;std_msgs;std_srvs;tf2;tf2_ros;tf2_sensor_msgs;ufomap;ufomap_msgs;ufomap_ros;pcl_ros".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lufomap_manager".split(';') if "-lufomap_manager" != "" else []
PROJECT_NAME = "ufomap_manager"
PROJECT_SPACE_DIR = "/home/gjh/FAEL/install"
PROJECT_VERSION = "0.0.1"
