// Generated by gencpp from file map_manager/CheckCollisionRequest.msg
// DO NOT EDIT!


#ifndef MAP_MANAGER_MESSAGE_CHECKCOLLISIONREQUEST_H
#define MAP_MANAGER_MESSAGE_CHECKCOLLISIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_manager
{
template <class ContainerAllocator>
struct CheckCollisionRequest_
{
  typedef CheckCollisionRequest_<ContainerAllocator> Type;

  CheckCollisionRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , xsize(0.0)
    , ysize(0.0)
    , zsize(0.0)
    , update_map(false)
    , ignore_unknown(false)  {
    }
  CheckCollisionRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , xsize(0.0)
    , ysize(0.0)
    , zsize(0.0)
    , update_map(false)
    , ignore_unknown(false)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _xsize_type;
  _xsize_type xsize;

   typedef double _ysize_type;
  _ysize_type ysize;

   typedef double _zsize_type;
  _zsize_type zsize;

   typedef uint8_t _update_map_type;
  _update_map_type update_map;

   typedef uint8_t _ignore_unknown_type;
  _ignore_unknown_type ignore_unknown;





  typedef boost::shared_ptr< ::map_manager::CheckCollisionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_manager::CheckCollisionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CheckCollisionRequest_

typedef ::map_manager::CheckCollisionRequest_<std::allocator<void> > CheckCollisionRequest;

typedef boost::shared_ptr< ::map_manager::CheckCollisionRequest > CheckCollisionRequestPtr;
typedef boost::shared_ptr< ::map_manager::CheckCollisionRequest const> CheckCollisionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_manager::CheckCollisionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::map_manager::CheckCollisionRequest_<ContainerAllocator1> & lhs, const ::map_manager::CheckCollisionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.xsize == rhs.xsize &&
    lhs.ysize == rhs.ysize &&
    lhs.zsize == rhs.zsize &&
    lhs.update_map == rhs.update_map &&
    lhs.ignore_unknown == rhs.ignore_unknown;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::map_manager::CheckCollisionRequest_<ContainerAllocator1> & lhs, const ::map_manager::CheckCollisionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace map_manager

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_manager::CheckCollisionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_manager::CheckCollisionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_manager::CheckCollisionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3784dc4c69633fdb0fc9647695545409";
  }

  static const char* value(const ::map_manager::CheckCollisionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3784dc4c69633fdbULL;
  static const uint64_t static_value2 = 0x0fc9647695545409ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_manager/CheckCollisionRequest";
  }

  static const char* value(const ::map_manager::CheckCollisionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 xsize\n"
"float64 ysize\n"
"float64 zsize\n"
"bool update_map\n"
"bool ignore_unknown\n"
;
  }

  static const char* value(const ::map_manager::CheckCollisionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.xsize);
      stream.next(m.ysize);
      stream.next(m.zsize);
      stream.next(m.update_map);
      stream.next(m.ignore_unknown);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckCollisionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_manager::CheckCollisionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_manager::CheckCollisionRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "xsize: ";
    Printer<double>::stream(s, indent + "  ", v.xsize);
    s << indent << "ysize: ";
    Printer<double>::stream(s, indent + "  ", v.ysize);
    s << indent << "zsize: ";
    Printer<double>::stream(s, indent + "  ", v.zsize);
    s << indent << "update_map: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.update_map);
    s << indent << "ignore_unknown: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore_unknown);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MANAGER_MESSAGE_CHECKCOLLISIONREQUEST_H
