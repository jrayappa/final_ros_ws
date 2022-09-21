// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__TRAITS_HPP_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__TRAITS_HPP_

#include "software_training/msg/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::msg::Software>()
{
  return "software_training::msg::Software";
}

template<>
inline const char * name<software_training::msg::Software>()
{
  return "software_training/msg/Software";
}

template<>
struct has_fixed_size<software_training::msg::Software>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<software_training::msg::Software>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<software_training::msg::Software>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__TRAITS_HPP_
