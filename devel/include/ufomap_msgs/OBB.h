// Generated by gencpp from file ufomap_msgs/OBB.msg
// DO NOT EDIT!


#ifndef UFOMAP_MSGS_MESSAGE_OBB_H
#define UFOMAP_MSGS_MESSAGE_OBB_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ufomap_msgs/Point.h>
#include <ufomap_msgs/Point.h>
#include <ufomap_msgs/Point.h>

namespace ufomap_msgs
{
template <class ContainerAllocator>
struct OBB_
{
  typedef OBB_<ContainerAllocator> Type;

  OBB_()
    : center()
    , half_size()
    , rotation()  {
    }
  OBB_(const ContainerAllocator& _alloc)
    : center(_alloc)
    , half_size(_alloc)
    , rotation(_alloc)  {
  (void)_alloc;
    }



   typedef  ::ufomap_msgs::Point_<ContainerAllocator>  _center_type;
  _center_type center;

   typedef  ::ufomap_msgs::Point_<ContainerAllocator>  _half_size_type;
  _half_size_type half_size;

   typedef  ::ufomap_msgs::Point_<ContainerAllocator>  _rotation_type;
  _rotation_type rotation;





  typedef boost::shared_ptr< ::ufomap_msgs::OBB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ufomap_msgs::OBB_<ContainerAllocator> const> ConstPtr;

}; // struct OBB_

typedef ::ufomap_msgs::OBB_<std::allocator<void> > OBB;

typedef boost::shared_ptr< ::ufomap_msgs::OBB > OBBPtr;
typedef boost::shared_ptr< ::ufomap_msgs::OBB const> OBBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ufomap_msgs::OBB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ufomap_msgs::OBB_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ufomap_msgs::OBB_<ContainerAllocator1> & lhs, const ::ufomap_msgs::OBB_<ContainerAllocator2> & rhs)
{
  return lhs.center == rhs.center &&
    lhs.half_size == rhs.half_size &&
    lhs.rotation == rhs.rotation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ufomap_msgs::OBB_<ContainerAllocator1> & lhs, const ::ufomap_msgs::OBB_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ufomap_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ufomap_msgs::OBB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ufomap_msgs::OBB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ufomap_msgs::OBB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ufomap_msgs::OBB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ufomap_msgs::OBB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ufomap_msgs::OBB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ufomap_msgs::OBB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e931b8e26c2b1c2b5808b3eacdf69e3d";
  }

  static const char* value(const ::ufomap_msgs::OBB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe931b8e26c2b1c2bULL;
  static const uint64_t static_value2 = 0x5808b3eacdf69e3dULL;
};

template<class ContainerAllocator>
struct DataType< ::ufomap_msgs::OBB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ufomap_msgs/OBB";
  }

  static const char* value(const ::ufomap_msgs::OBB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ufomap_msgs::OBB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ufomap_msgs/Point center\n"
"\n"
"ufomap_msgs/Point half_size\n"
"\n"
"ufomap_msgs/Point rotation\n"
"================================================================================\n"
"MSG: ufomap_msgs/Point\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::ufomap_msgs::OBB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ufomap_msgs::OBB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.center);
      stream.next(m.half_size);
      stream.next(m.rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OBB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ufomap_msgs::OBB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ufomap_msgs::OBB_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "center: ";
    Printer< ::ufomap_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.center);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "half_size: ";
    Printer< ::ufomap_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.half_size);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "rotation: ";
    Printer< ::ufomap_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.rotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UFOMAP_MSGS_MESSAGE_OBB_H
