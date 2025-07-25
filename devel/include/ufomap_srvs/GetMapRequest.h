// Generated by gencpp from file ufomap_srvs/GetMapRequest.msg
// DO NOT EDIT!


#ifndef UFOMAP_SRVS_MESSAGE_GETMAPREQUEST_H
#define UFOMAP_SRVS_MESSAGE_GETMAPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ufomap_msgs/BoundingVolume.h>

namespace ufomap_srvs
{
template <class ContainerAllocator>
struct GetMapRequest_
{
  typedef GetMapRequest_<ContainerAllocator> Type;

  GetMapRequest_()
    : depth(0)
    , compress(false)
    , bounding_volume()  {
    }
  GetMapRequest_(const ContainerAllocator& _alloc)
    : depth(0)
    , compress(false)
    , bounding_volume(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _depth_type;
  _depth_type depth;

   typedef uint8_t _compress_type;
  _compress_type compress;

   typedef  ::ufomap_msgs::BoundingVolume_<ContainerAllocator>  _bounding_volume_type;
  _bounding_volume_type bounding_volume;





  typedef boost::shared_ptr< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapRequest_

typedef ::ufomap_srvs::GetMapRequest_<std::allocator<void> > GetMapRequest;

typedef boost::shared_ptr< ::ufomap_srvs::GetMapRequest > GetMapRequestPtr;
typedef boost::shared_ptr< ::ufomap_srvs::GetMapRequest const> GetMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ufomap_srvs::GetMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ufomap_srvs::GetMapRequest_<ContainerAllocator1> & lhs, const ::ufomap_srvs::GetMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.depth == rhs.depth &&
    lhs.compress == rhs.compress &&
    lhs.bounding_volume == rhs.bounding_volume;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ufomap_srvs::GetMapRequest_<ContainerAllocator1> & lhs, const ::ufomap_srvs::GetMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ufomap_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "283deba7c9e328b954a502b944947b13";
  }

  static const char* value(const ::ufomap_srvs::GetMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x283deba7c9e328b9ULL;
  static const uint64_t static_value2 = 0x54a502b944947b13ULL;
};

template<class ContainerAllocator>
struct DataType< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ufomap_srvs/GetMapRequest";
  }

  static const char* value(const ::ufomap_srvs::GetMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Get the complete map at a specified depth\n"
"\n"
"# The depth of the map to return\n"
"uint8 depth\n"
"# If the message should be compressed\n"
"bool compress\n"
"# Bounding volume of which part of the map should be returned\n"
"ufomap_msgs/BoundingVolume bounding_volume\n"
"\n"
"================================================================================\n"
"MSG: ufomap_msgs/BoundingVolume\n"
"ufomap_msgs/AABB[] aabbs\n"
"\n"
"# ufomap_msgs/Capsule[] capsules\n"
"\n"
"# ufomap_msgs/Cone[] cones\n"
"\n"
"# ufomap_msgs/Cylinder[] cylinders\n"
"\n"
"# ufomap_msgs/Ellipsoid[] ellipsoids\n"
"\n"
"ufomap_msgs/Frustum[] frustums\n"
"\n"
"ufomap_msgs/LineSegment[] line_segments\n"
"\n"
"ufomap_msgs/OBB[] obbs\n"
"\n"
"ufomap_msgs/Plane[] planes\n"
"\n"
"ufomap_msgs/Point[] points\n"
"\n"
"ufomap_msgs/Ray[] rays\n"
"\n"
"ufomap_msgs/Sphere[] spheres\n"
"\n"
"# ufomap_msgs/Triangle[] triangles\n"
"================================================================================\n"
"MSG: ufomap_msgs/AABB\n"
"ufomap_msgs/Point center\n"
"\n"
"ufomap_msgs/Point half_size\n"
"================================================================================\n"
"MSG: ufomap_msgs/Point\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: ufomap_msgs/Frustum\n"
"ufomap_msgs/Plane[6] planes\n"
"================================================================================\n"
"MSG: ufomap_msgs/Plane\n"
"ufomap_msgs/Point normal\n"
"\n"
"float64 distance\n"
"================================================================================\n"
"MSG: ufomap_msgs/LineSegment\n"
"ufomap_msgs/Point start\n"
"\n"
"ufomap_msgs/Point end\n"
"================================================================================\n"
"MSG: ufomap_msgs/OBB\n"
"ufomap_msgs/Point center\n"
"\n"
"ufomap_msgs/Point half_size\n"
"\n"
"ufomap_msgs/Point rotation\n"
"================================================================================\n"
"MSG: ufomap_msgs/Ray\n"
"ufomap_msgs/Point origin\n"
"\n"
"ufomap_msgs/Point direction\n"
"================================================================================\n"
"MSG: ufomap_msgs/Sphere\n"
"ufomap_msgs/Point center\n"
"\n"
"float64 radius\n"
;
  }

  static const char* value(const ::ufomap_srvs::GetMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.depth);
      stream.next(m.compress);
      stream.next(m.bounding_volume);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ufomap_srvs::GetMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ufomap_srvs::GetMapRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "depth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.depth);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "compress: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compress);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "bounding_volume: ";
    Printer< ::ufomap_msgs::BoundingVolume_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_volume);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UFOMAP_SRVS_MESSAGE_GETMAPREQUEST_H
