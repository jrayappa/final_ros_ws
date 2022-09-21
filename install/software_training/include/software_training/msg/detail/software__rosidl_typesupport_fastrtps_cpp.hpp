// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "software_training/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "software_training/msg/detail/software__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace software_training
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_software_training
cdr_serialize(
  const software_training::msg::Software & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_software_training
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  software_training::msg::Software & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_software_training
get_serialized_size(
  const software_training::msg::Software & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_software_training
max_serialized_size_Software(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace software_training

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_software_training
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, msg, Software)();

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
