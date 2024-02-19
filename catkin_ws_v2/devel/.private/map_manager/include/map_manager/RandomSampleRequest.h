// Generated by gencpp from file map_manager/RandomSampleRequest.msg
// DO NOT EDIT!


#ifndef MAP_MANAGER_MESSAGE_RANDOMSAMPLEREQUEST_H
#define MAP_MANAGER_MESSAGE_RANDOMSAMPLEREQUEST_H


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
struct RandomSampleRequest_
{
  typedef RandomSampleRequest_<ContainerAllocator> Type;

  RandomSampleRequest_()
    : xsize(0.0)
    , ysize(0.0)
    , zsize(0.0)
    , ignore_unknown(false)  {
    }
  RandomSampleRequest_(const ContainerAllocator& _alloc)
    : xsize(0.0)
    , ysize(0.0)
    , zsize(0.0)
    , ignore_unknown(false)  {
  (void)_alloc;
    }



   typedef double _xsize_type;
  _xsize_type xsize;

   typedef double _ysize_type;
  _ysize_type ysize;

   typedef double _zsize_type;
  _zsize_type zsize;

   typedef uint8_t _ignore_unknown_type;
  _ignore_unknown_type ignore_unknown;





  typedef boost::shared_ptr< ::map_manager::RandomSampleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_manager::RandomSampleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RandomSampleRequest_

typedef ::map_manager::RandomSampleRequest_<std::allocator<void> > RandomSampleRequest;

typedef boost::shared_ptr< ::map_manager::RandomSampleRequest > RandomSampleRequestPtr;
typedef boost::shared_ptr< ::map_manager::RandomSampleRequest const> RandomSampleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_manager::RandomSampleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_manager::RandomSampleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::map_manager::RandomSampleRequest_<ContainerAllocator1> & lhs, const ::map_manager::RandomSampleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.xsize == rhs.xsize &&
    lhs.ysize == rhs.ysize &&
    lhs.zsize == rhs.zsize &&
    lhs.ignore_unknown == rhs.ignore_unknown;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::map_manager::RandomSampleRequest_<ContainerAllocator1> & lhs, const ::map_manager::RandomSampleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace map_manager

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_manager::RandomSampleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_manager::RandomSampleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_manager::RandomSampleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7efa50c43bd88b2bcce1b7386a5336b";
  }

  static const char* value(const ::map_manager::RandomSampleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7efa50c43bd88b2ULL;
  static const uint64_t static_value2 = 0xbcce1b7386a5336bULL;
};

template<class ContainerAllocator>
struct DataType< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_manager/RandomSampleRequest";
  }

  static const char* value(const ::map_manager::RandomSampleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 xsize\n"
"float64 ysize\n"
"float64 zsize\n"
"bool ignore_unknown\n"
;
  }

  static const char* value(const ::map_manager::RandomSampleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.xsize);
      stream.next(m.ysize);
      stream.next(m.zsize);
      stream.next(m.ignore_unknown);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RandomSampleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_manager::RandomSampleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_manager::RandomSampleRequest_<ContainerAllocator>& v)
  {
    s << indent << "xsize: ";
    Printer<double>::stream(s, indent + "  ", v.xsize);
    s << indent << "ysize: ";
    Printer<double>::stream(s, indent + "  ", v.ysize);
    s << indent << "zsize: ";
    Printer<double>::stream(s, indent + "  ", v.zsize);
    s << indent << "ignore_unknown: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore_unknown);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MANAGER_MESSAGE_RANDOMSAMPLEREQUEST_H