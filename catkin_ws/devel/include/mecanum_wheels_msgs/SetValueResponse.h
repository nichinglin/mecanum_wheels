// Generated by gencpp from file mecanum_wheels_msgs/SetValueResponse.msg
// DO NOT EDIT!


#ifndef MECANUM_WHEELS_MSGS_MESSAGE_SETVALUERESPONSE_H
#define MECANUM_WHEELS_MSGS_MESSAGE_SETVALUERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mecanum_wheels_msgs
{
template <class ContainerAllocator>
struct SetValueResponse_
{
  typedef SetValueResponse_<ContainerAllocator> Type;

  SetValueResponse_()
    {
    }
  SetValueResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetValueResponse_

typedef ::mecanum_wheels_msgs::SetValueResponse_<std::allocator<void> > SetValueResponse;

typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetValueResponse > SetValueResponsePtr;
typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetValueResponse const> SetValueResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mecanum_wheels_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'mecanum_wheels_msgs': ['/home/sis/catkin_ws/src/mecanum_wheels/catkin_ws/src/mecanum_wheels_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mecanum_wheels_msgs/SetValueResponse";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetValueResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::mecanum_wheels_msgs::SetValueResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MECANUM_WHEELS_MSGS_MESSAGE_SETVALUERESPONSE_H
