// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "software_training/msg/detail/software__rosidl_typesupport_introspection_c.h"
#include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "software_training/msg/detail/software__functions.h"
#include "software_training/msg/detail/software__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Software__rosidl_typesupport_introspection_c__Software_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__msg__Software__init(message_memory);
}

void Software__rosidl_typesupport_introspection_c__Software_fini_function(void * message_memory)
{
  software_training__msg__Software__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software__rosidl_typesupport_introspection_c__Software_message_member_array[3] = {
  {
    "x_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__msg__Software, x_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__msg__Software, y_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__msg__Software, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software__rosidl_typesupport_introspection_c__Software_message_members = {
  "software_training__msg",  // message namespace
  "Software",  // message name
  3,  // number of fields
  sizeof(software_training__msg__Software),
  Software__rosidl_typesupport_introspection_c__Software_message_member_array,  // message members
  Software__rosidl_typesupport_introspection_c__Software_init_function,  // function to initialize message memory (memory has to be allocated)
  Software__rosidl_typesupport_introspection_c__Software_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software__rosidl_typesupport_introspection_c__Software_message_type_support_handle = {
  0,
  &Software__rosidl_typesupport_introspection_c__Software_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, msg, Software)() {
  if (!Software__rosidl_typesupport_introspection_c__Software_message_type_support_handle.typesupport_identifier) {
    Software__rosidl_typesupport_introspection_c__Software_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software__rosidl_typesupport_introspection_c__Software_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
