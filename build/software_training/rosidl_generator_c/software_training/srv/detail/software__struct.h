// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from software_training:srv/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__STRUCT_H_
#define SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Software in the package software_training.
typedef struct software_training__srv__Software_Request
{
  uint8_t structure_needs_at_least_one_member;
} software_training__srv__Software_Request;

// Struct for a sequence of software_training__srv__Software_Request.
typedef struct software_training__srv__Software_Request__Sequence
{
  software_training__srv__Software_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__srv__Software_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Software in the package software_training.
typedef struct software_training__srv__Software_Response
{
  bool success;
} software_training__srv__Software_Response;

// Struct for a sequence of software_training__srv__Software_Response.
typedef struct software_training__srv__Software_Response__Sequence
{
  software_training__srv__Software_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__srv__Software_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__STRUCT_H_
