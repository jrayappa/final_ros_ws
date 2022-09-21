// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from software_training:srv/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__TRAITS_HPP_
#define SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__TRAITS_HPP_

#include "software_training/srv/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::srv::Software_Request>()
{
  return "software_training::srv::Software_Request";
}

template<>
inline const char * name<software_training::srv::Software_Request>()
{
  return "software_training/srv/Software_Request";
}

template<>
struct has_fixed_size<software_training::srv::Software_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<software_training::srv::Software_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<software_training::srv::Software_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::srv::Software_Response>()
{
  return "software_training::srv::Software_Response";
}

template<>
inline const char * name<software_training::srv::Software_Response>()
{
  return "software_training/srv/Software_Response";
}

template<>
struct has_fixed_size<software_training::srv::Software_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<software_training::srv::Software_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<software_training::srv::Software_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::srv::Software>()
{
  return "software_training::srv::Software";
}

template<>
inline const char * name<software_training::srv::Software>()
{
  return "software_training/srv/Software";
}

template<>
struct has_fixed_size<software_training::srv::Software>
  : std::integral_constant<
    bool,
    has_fixed_size<software_training::srv::Software_Request>::value &&
    has_fixed_size<software_training::srv::Software_Response>::value
  >
{
};

template<>
struct has_bounded_size<software_training::srv::Software>
  : std::integral_constant<
    bool,
    has_bounded_size<software_training::srv::Software_Request>::value &&
    has_bounded_size<software_training::srv::Software_Response>::value
  >
{
};

template<>
struct is_service<software_training::srv::Software>
  : std::true_type
{
};

template<>
struct is_service_request<software_training::srv::Software_Request>
  : std::true_type
{
};

template<>
struct is_service_response<software_training::srv::Software_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__TRAITS_HPP_
