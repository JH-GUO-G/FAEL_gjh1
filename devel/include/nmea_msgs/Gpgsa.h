// Generated by gencpp from file nmea_msgs/Gpgsa.msg
// DO NOT EDIT!


#ifndef NMEA_MSGS_MESSAGE_GPGSA_H
#define NMEA_MSGS_MESSAGE_GPGSA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nmea_msgs
{
template <class ContainerAllocator>
struct Gpgsa_
{
  typedef Gpgsa_<ContainerAllocator> Type;

  Gpgsa_()
    : header()
    , message_id()
    , auto_manual_mode()
    , fix_mode(0)
    , sv_ids()
    , pdop(0.0)
    , hdop(0.0)
    , vdop(0.0)  {
    }
  Gpgsa_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , message_id(_alloc)
    , auto_manual_mode(_alloc)
    , fix_mode(0)
    , sv_ids(_alloc)
    , pdop(0.0)
    , hdop(0.0)
    , vdop(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_id_type;
  _message_id_type message_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _auto_manual_mode_type;
  _auto_manual_mode_type auto_manual_mode;

   typedef uint8_t _fix_mode_type;
  _fix_mode_type fix_mode;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _sv_ids_type;
  _sv_ids_type sv_ids;

   typedef float _pdop_type;
  _pdop_type pdop;

   typedef float _hdop_type;
  _hdop_type hdop;

   typedef float _vdop_type;
  _vdop_type vdop;





  typedef boost::shared_ptr< ::nmea_msgs::Gpgsa_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nmea_msgs::Gpgsa_<ContainerAllocator> const> ConstPtr;

}; // struct Gpgsa_

typedef ::nmea_msgs::Gpgsa_<std::allocator<void> > Gpgsa;

typedef boost::shared_ptr< ::nmea_msgs::Gpgsa > GpgsaPtr;
typedef boost::shared_ptr< ::nmea_msgs::Gpgsa const> GpgsaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nmea_msgs::Gpgsa_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nmea_msgs::Gpgsa_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nmea_msgs::Gpgsa_<ContainerAllocator1> & lhs, const ::nmea_msgs::Gpgsa_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.message_id == rhs.message_id &&
    lhs.auto_manual_mode == rhs.auto_manual_mode &&
    lhs.fix_mode == rhs.fix_mode &&
    lhs.sv_ids == rhs.sv_ids &&
    lhs.pdop == rhs.pdop &&
    lhs.hdop == rhs.hdop &&
    lhs.vdop == rhs.vdop;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nmea_msgs::Gpgsa_<ContainerAllocator1> & lhs, const ::nmea_msgs::Gpgsa_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nmea_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nmea_msgs::Gpgsa_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nmea_msgs::Gpgsa_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nmea_msgs::Gpgsa_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94a6ef4a36d322374b16097a5d03433e";
  }

  static const char* value(const ::nmea_msgs::Gpgsa_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94a6ef4a36d32237ULL;
  static const uint64_t static_value2 = 0x4b16097a5d03433eULL;
};

template<class ContainerAllocator>
struct DataType< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nmea_msgs/Gpgsa";
  }

  static const char* value(const ::nmea_msgs::Gpgsa_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message from GPGSA NMEA String\n"
"Header header\n"
"\n"
"string message_id\n"
"\n"
"string auto_manual_mode\n"
"uint8 fix_mode\n"
"\n"
"uint8[] sv_ids\n"
"\n"
"float32 pdop\n"
"float32 hdop\n"
"float32 vdop\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::nmea_msgs::Gpgsa_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.message_id);
      stream.next(m.auto_manual_mode);
      stream.next(m.fix_mode);
      stream.next(m.sv_ids);
      stream.next(m.pdop);
      stream.next(m.hdop);
      stream.next(m.vdop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gpgsa_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nmea_msgs::Gpgsa_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nmea_msgs::Gpgsa_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "header: ";
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "message_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message_id);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "auto_manual_mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.auto_manual_mode);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "fix_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fix_mode);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "sv_ids: ";
    if (v.sv_ids.empty() || true)
      s << "[";
    for (size_t i = 0; i < v.sv_ids.size(); ++i)
    {
      if (true && i > 0)
        s << ", ";
      else if (!true)
        s << std::endl << indent << "  -";
      Printer<uint8_t>::stream(s, true ? std::string() : indent + "    ", v.sv_ids[i]);
    }
    if (v.sv_ids.empty() || true)
      s << "]";
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "pdop: ";
    Printer<float>::stream(s, indent + "  ", v.pdop);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "hdop: ";
    Printer<float>::stream(s, indent + "  ", v.hdop);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "vdop: ";
    Printer<float>::stream(s, indent + "  ", v.vdop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NMEA_MSGS_MESSAGE_GPGSA_H
