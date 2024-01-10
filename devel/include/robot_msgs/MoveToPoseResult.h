// Generated by gencpp from file robot_msgs/MoveToPoseResult.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_MOVETOPOSERESULT_H
#define ROBOT_MSGS_MESSAGE_MOVETOPOSERESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_msgs
{
template <class ContainerAllocator>
struct MoveToPoseResult_
{
  typedef MoveToPoseResult_<ContainerAllocator> Type;

  MoveToPoseResult_()
    : success(false)
    , distance_error(0.0)
    , angle_error(0.0)  {
    }
  MoveToPoseResult_(const ContainerAllocator& _alloc)
    : success(false)
    , distance_error(0.0)
    , angle_error(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef float _distance_error_type;
  _distance_error_type distance_error;

   typedef float _angle_error_type;
  _angle_error_type angle_error;





  typedef boost::shared_ptr< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToPoseResult_

typedef ::robot_msgs::MoveToPoseResult_<std::allocator<void> > MoveToPoseResult;

typedef boost::shared_ptr< ::robot_msgs::MoveToPoseResult > MoveToPoseResultPtr;
typedef boost::shared_ptr< ::robot_msgs::MoveToPoseResult const> MoveToPoseResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::MoveToPoseResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::MoveToPoseResult_<ContainerAllocator1> & lhs, const ::robot_msgs::MoveToPoseResult_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.distance_error == rhs.distance_error &&
    lhs.angle_error == rhs.angle_error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::MoveToPoseResult_<ContainerAllocator1> & lhs, const ::robot_msgs::MoveToPoseResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e10d40ae20ce81829989865e265c0534";
  }

  static const char* value(const ::robot_msgs::MoveToPoseResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe10d40ae20ce8182ULL;
  static const uint64_t static_value2 = 0x9989865e265c0534ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/MoveToPoseResult";
  }

  static const char* value(const ::robot_msgs::MoveToPoseResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"bool success\n"
"float32 distance_error\n"
"float32 angle_error\n"
;
  }

  static const char* value(const ::robot_msgs::MoveToPoseResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.distance_error);
      stream.next(m.angle_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToPoseResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::MoveToPoseResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::MoveToPoseResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "distance_error: ";
    Printer<float>::stream(s, indent + "  ", v.distance_error);
    s << indent << "angle_error: ";
    Printer<float>::stream(s, indent + "  ", v.angle_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_MOVETOPOSERESULT_H
