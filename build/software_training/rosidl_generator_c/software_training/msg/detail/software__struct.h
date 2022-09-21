// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_H_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Software in the package software_training.
typedef struct software_training__msg__Software
{
  double x_pos;
  double y_pos;
  double distance;
} software_training__msg__Software;

// Struct for a sequence of software_training__msg__Software.
typedef struct software_training__msg__Software__Sequence
{
  software_training__msg__Software * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__msg__Software__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_H_
