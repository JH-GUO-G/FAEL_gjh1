// Generated by gencpp from file control_planner_interface/ExplorerPlannerGoal.msg
// DO NOT EDIT!


#ifndef CONTROL_PLANNER_INTERFACE_MESSAGE_EXPLORERPLANNERGOAL_H
#define CONTROL_PLANNER_INTERFACE_MESSAGE_EXPLORERPLANNERGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_planner_interface
{
template <class ContainerAllocator>
struct ExplorerPlannerGoal_
{
  typedef ExplorerPlannerGoal_<ContainerAllocator> Type;

  ExplorerPlannerGoal_()
    : iteration_id(0)  {
    }
  ExplorerPlannerGoal_(const ContainerAllocator& _alloc)
    : iteration_id(0)  {
  (void)_alloc;
    }



   typedef int32_t _iteration_id_type;
  _iteration_id_type iteration_id;





  typedef boost::shared_ptr< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ExplorerPlannerGoal_

typedef ::control_planner_interface::ExplorerPlannerGoal_<std::allocator<void> > ExplorerPlannerGoal;

typedef boost::shared_ptr< ::control_planner_interface::ExplorerPlannerGoal > ExplorerPlannerGoalPtr;
typedef boost::shared_ptr< ::control_planner_interface::ExplorerPlannerGoal const> ExplorerPlannerGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator1> & lhs, const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator2> & rhs)
{
  return lhs.iteration_id == rhs.iteration_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator1> & lhs, const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace control_planner_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "374377ab10495f5a9792cd599df80faf";
  }

  static const char* value(const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x374377ab10495f5aULL;
  static const uint64_t static_value2 = 0x9792cd599df80fafULL;
};

template<class ContainerAllocator>
struct DataType< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_planner_interface/ExplorerPlannerGoal";
  }

  static const char* value(const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"int32 iteration_id\n"
"\n"
;
  }

  static const char* value(const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iteration_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExplorerPlannerGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_planner_interface::ExplorerPlannerGoal_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "iteration_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iteration_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_PLANNER_INTERFACE_MESSAGE_EXPLORERPLANNERGOAL_H
