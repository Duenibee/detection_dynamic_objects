// Generated by gencpp from file yolov8_msgs/KeyPoint3DArray.msg
// DO NOT EDIT!


#ifndef YOLOV8_MSGS_MESSAGE_KEYPOINT3DARRAY_H
#define YOLOV8_MSGS_MESSAGE_KEYPOINT3DARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yolov8_msgs/KeyPoint3D.h>

namespace yolov8_msgs
{
template <class ContainerAllocator>
struct KeyPoint3DArray_
{
  typedef KeyPoint3DArray_<ContainerAllocator> Type;

  KeyPoint3DArray_()
    : data()
    , frame_id()  {
    }
  KeyPoint3DArray_(const ContainerAllocator& _alloc)
    : data(_alloc)
    , frame_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::yolov8_msgs::KeyPoint3D_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::yolov8_msgs::KeyPoint3D_<ContainerAllocator> >> _data_type;
  _data_type data;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _frame_id_type;
  _frame_id_type frame_id;





  typedef boost::shared_ptr< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> const> ConstPtr;

}; // struct KeyPoint3DArray_

typedef ::yolov8_msgs::KeyPoint3DArray_<std::allocator<void> > KeyPoint3DArray;

typedef boost::shared_ptr< ::yolov8_msgs::KeyPoint3DArray > KeyPoint3DArrayPtr;
typedef boost::shared_ptr< ::yolov8_msgs::KeyPoint3DArray const> KeyPoint3DArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator1> & lhs, const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.frame_id == rhs.frame_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator1> & lhs, const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yolov8_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fb7359c0337d8b16bcb324732c066fe";
  }

  static const char* value(const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fb7359c0337d8b1ULL;
  static const uint64_t static_value2 = 0x6bcb324732c066feULL;
};

template<class ContainerAllocator>
struct DataType< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yolov8_msgs/KeyPoint3DArray";
  }

  static const char* value(const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# represents all the keypoints for human pose estimation in meters\n"
"\n"
"yolov8_msgs/KeyPoint3D[] data\n"
"\n"
"# frame reference\n"
"string frame_id\n"
"================================================================================\n"
"MSG: yolov8_msgs/KeyPoint3D\n"
"# one keypoint for human pose estimation\n"
"\n"
"# id of the keypoint\n"
"int32 id\n"
"\n"
"# 3D point in meters\n"
"geometry_msgs/Point point\n"
"\n"
"# conf of the keypoint\n"
"float64 score\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.frame_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyPoint3DArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yolov8_msgs::KeyPoint3DArray_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::yolov8_msgs::KeyPoint3D_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.frame_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOLOV8_MSGS_MESSAGE_KEYPOINT3DARRAY_H
