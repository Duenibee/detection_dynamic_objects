// Generated by gencpp from file yolov8_msgs/BoundingBox3D.msg
// DO NOT EDIT!


#ifndef YOLOV8_MSGS_MESSAGE_BOUNDINGBOX3D_H
#define YOLOV8_MSGS_MESSAGE_BOUNDINGBOX3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Vector3.h>

namespace yolov8_msgs
{
template <class ContainerAllocator>
struct BoundingBox3D_
{
  typedef BoundingBox3D_<ContainerAllocator> Type;

  BoundingBox3D_()
    : center()
    , size()
    , frame_id()
    , id(0)  {
    }
  BoundingBox3D_(const ContainerAllocator& _alloc)
    : center(_alloc)
    , size(_alloc)
    , frame_id(_alloc)
    , id(0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _center_type;
  _center_type center;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _size_type;
  _size_type size;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _frame_id_type;
  _frame_id_type frame_id;

   typedef int32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBox3D_

typedef ::yolov8_msgs::BoundingBox3D_<std::allocator<void> > BoundingBox3D;

typedef boost::shared_ptr< ::yolov8_msgs::BoundingBox3D > BoundingBox3DPtr;
typedef boost::shared_ptr< ::yolov8_msgs::BoundingBox3D const> BoundingBox3DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator1> & lhs, const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator2> & rhs)
{
  return lhs.center == rhs.center &&
    lhs.size == rhs.size &&
    lhs.frame_id == rhs.frame_id &&
    lhs.id == rhs.id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator1> & lhs, const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yolov8_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8c2308213968a5c730da9ad2a547294";
  }

  static const char* value(const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8c2308213968a5cULL;
  static const uint64_t static_value2 = 0x730da9ad2a547294ULL;
};

template<class ContainerAllocator>
struct DataType< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yolov8_msgs/BoundingBox3D";
  }

  static const char* value(const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 3D position and orientation of the bounding box center\n"
"geometry_msgs/Pose center\n"
"\n"
"# total size of the bounding box, in meters, surrounding the object's center\n"
"geometry_msgs/Vector3 size\n"
"\n"
"# frame reference\n"
"string frame_id\n"
"\n"
"# id of the keypoint\n"
"int32 id\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.center);
      stream.next(m.size);
      stream.next(m.frame_id);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoundingBox3D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yolov8_msgs::BoundingBox3D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yolov8_msgs::BoundingBox3D_<ContainerAllocator>& v)
  {
    s << indent << "center: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.center);
    s << indent << "size: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.size);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.frame_id);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOLOV8_MSGS_MESSAGE_BOUNDINGBOX3D_H
