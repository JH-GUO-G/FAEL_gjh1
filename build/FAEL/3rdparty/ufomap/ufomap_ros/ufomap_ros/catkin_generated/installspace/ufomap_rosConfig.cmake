# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(ufomap_ros_CONFIG_INCLUDED)
  return()
endif()
set(ufomap_ros_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(ufomap_ros_SOURCE_PREFIX /home/gjh/FAEL/src/FAEL/3rdparty/ufomap/ufomap_ros/ufomap_ros)
  set(ufomap_ros_DEVEL_PREFIX /home/gjh/FAEL/devel)
  set(ufomap_ros_INSTALL_PREFIX "")
  set(ufomap_ros_PREFIX ${ufomap_ros_DEVEL_PREFIX})
else()
  set(ufomap_ros_SOURCE_PREFIX "")
  set(ufomap_ros_DEVEL_PREFIX "")
  set(ufomap_ros_INSTALL_PREFIX /home/gjh/FAEL/install)
  set(ufomap_ros_PREFIX ${ufomap_ros_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'ufomap_ros' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(ufomap_ros_FOUND_CATKIN_PROJECT TRUE)

if(NOT "include;/opt/ros/noetic/include;/opt/ros/noetic/share/xmlrpcpp/cmake/../../../include/xmlrpcpp;/usr/include " STREQUAL " ")
  set(ufomap_ros_INCLUDE_DIRS "")
  set(_include_dirs "include;/opt/ros/noetic/include;/opt/ros/noetic/share/xmlrpcpp/cmake/../../../include/xmlrpcpp;/usr/include")
  if(NOT " " STREQUAL " ")
    set(_report "Check the issue tracker '' and consider creating a ticket if the problem has not been reported yet.")
  elseif(NOT "https://github.com/danielduberg/ufomap_ros " STREQUAL " ")
    set(_report "Check the website 'https://github.com/danielduberg/ufomap_ros' for information and consider reporting the problem.")
  else()
    set(_report "Report the problem to the maintainer 'Daniel Duberg <dduberg@kth.se>' and request to fix the problem.")
  endif()
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${ufomap_ros_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'ufomap_ros' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  ${_report}")
      endif()
    else()
      message(FATAL_ERROR "Project 'ufomap_ros' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '\${prefix}/${idir}'.  ${_report}")
    endif()
    _list_append_unique(ufomap_ros_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "ufomap_ros;/opt/ros/noetic/lib/libroscpp.so;/usr/lib/x86_64-linux-gnu/libpthread.so;/usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0;/opt/ros/noetic/lib/librosconsole.so;/opt/ros/noetic/lib/librosconsole_log4cxx.so;/opt/ros/noetic/lib/librosconsole_backend_interface.so;/usr/lib/x86_64-linux-gnu/liblog4cxx.so;/usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0;/opt/ros/noetic/lib/libxmlrpcpp.so;/opt/ros/noetic/lib/libroscpp_serialization.so;/opt/ros/noetic/lib/librostime.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0;/opt/ros/noetic/lib/libcpp_common.so;/usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0;/usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0;/usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4")
foreach(library ${libraries})
  # keep build configuration keywords, generator expressions, target names, and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND ufomap_ros_LIBRARIES ${library})
  elseif(${library} MATCHES "^-l")
    list(APPEND ufomap_ros_LIBRARIES ${library})
  elseif(${library} MATCHES "^-")
    # This is a linker flag/option (like -pthread)
    # There's no standard variable for these, so create an interface library to hold it
    if(NOT ufomap_ros_NUM_DUMMY_TARGETS)
      set(ufomap_ros_NUM_DUMMY_TARGETS 0)
    endif()
    # Make sure the target name is unique
    set(interface_target_name "catkin::ufomap_ros::wrapped-linker-option${ufomap_ros_NUM_DUMMY_TARGETS}")
    while(TARGET "${interface_target_name}")
      math(EXPR ufomap_ros_NUM_DUMMY_TARGETS "${ufomap_ros_NUM_DUMMY_TARGETS}+1")
      set(interface_target_name "catkin::ufomap_ros::wrapped-linker-option${ufomap_ros_NUM_DUMMY_TARGETS}")
    endwhile()
    add_library("${interface_target_name}" INTERFACE IMPORTED)
    if("${CMAKE_VERSION}" VERSION_LESS "3.13.0")
      set_property(
        TARGET
        "${interface_target_name}"
        APPEND PROPERTY
        INTERFACE_LINK_LIBRARIES "${library}")
    else()
      target_link_options("${interface_target_name}" INTERFACE "${library}")
    endif()
    list(APPEND ufomap_ros_LIBRARIES "${interface_target_name}")
  elseif(${library} MATCHES "^\\$<")
    list(APPEND ufomap_ros_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND ufomap_ros_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND ufomap_ros_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/gjh/FAEL/install/lib;/opt/ros/noetic/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(ufomap_ros_LIBRARY_DIRS ${lib_path})
      list(APPEND ufomap_ros_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'ufomap_ros'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND ufomap_ros_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(ufomap_ros_EXPORTED_TARGETS "")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${ufomap_ros_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "geometry_msgs;roscpp;sensor_msgs")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 ufomap_ros_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${ufomap_ros_dep}_FOUND)
      find_package(${ufomap_ros_dep} REQUIRED NO_MODULE)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${ufomap_ros_dep} REQUIRED NO_MODULE ${depend_list})
  endif()
  _list_append_unique(ufomap_ros_INCLUDE_DIRS ${${ufomap_ros_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(ufomap_ros_LIBRARIES ${ufomap_ros_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${ufomap_ros_dep}_LIBRARIES})
  _list_append_deduplicate(ufomap_ros_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(ufomap_ros_LIBRARIES ${ufomap_ros_LIBRARIES})

  _list_append_unique(ufomap_ros_LIBRARY_DIRS ${${ufomap_ros_dep}_LIBRARY_DIRS})
  _list_append_deduplicate(ufomap_ros_EXPORTED_TARGETS ${${ufomap_ros_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${ufomap_ros_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
