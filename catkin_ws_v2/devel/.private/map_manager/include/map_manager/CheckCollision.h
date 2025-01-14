// Generated by gencpp from file map_manager/CheckCollision.msg
// DO NOT EDIT!


#ifndef MAP_MANAGER_MESSAGE_CHECKCOLLISION_H
#define MAP_MANAGER_MESSAGE_CHECKCOLLISION_H

#include <ros/service_traits.h>


#include <map_manager/CheckCollisionRequest.h>
#include <map_manager/CheckCollisionResponse.h>


namespace map_manager
{

struct CheckCollision
{

typedef CheckCollisionRequest Request;
typedef CheckCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckCollision
} // namespace map_manager


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::map_manager::CheckCollision > {
  static const char* value()
  {
    return "175e32ae1f050a1a9b19e0c69bf5eab8";
  }

  static const char* value(const ::map_manager::CheckCollision&) { return value(); }
};

template<>
struct DataType< ::map_manager::CheckCollision > {
  static const char* value()
  {
    return "map_manager/CheckCollision";
  }

  static const char* value(const ::map_manager::CheckCollision&) { return value(); }
};


// service_traits::MD5Sum< ::map_manager::CheckCollisionRequest> should match
// service_traits::MD5Sum< ::map_manager::CheckCollision >
template<>
struct MD5Sum< ::map_manager::CheckCollisionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::map_manager::CheckCollision >::value();
  }
  static const char* value(const ::map_manager::CheckCollisionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_manager::CheckCollisionRequest> should match
// service_traits::DataType< ::map_manager::CheckCollision >
template<>
struct DataType< ::map_manager::CheckCollisionRequest>
{
  static const char* value()
  {
    return DataType< ::map_manager::CheckCollision >::value();
  }
  static const char* value(const ::map_manager::CheckCollisionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::map_manager::CheckCollisionResponse> should match
// service_traits::MD5Sum< ::map_manager::CheckCollision >
template<>
struct MD5Sum< ::map_manager::CheckCollisionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::map_manager::CheckCollision >::value();
  }
  static const char* value(const ::map_manager::CheckCollisionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_manager::CheckCollisionResponse> should match
// service_traits::DataType< ::map_manager::CheckCollision >
template<>
struct DataType< ::map_manager::CheckCollisionResponse>
{
  static const char* value()
  {
    return DataType< ::map_manager::CheckCollision >::value();
  }
  static const char* value(const ::map_manager::CheckCollisionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAP_MANAGER_MESSAGE_CHECKCOLLISION_H
