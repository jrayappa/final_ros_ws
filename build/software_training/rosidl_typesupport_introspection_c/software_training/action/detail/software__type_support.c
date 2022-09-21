// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
#include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "software_training/action/detail/software__functions.h"
#include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `linear_pos`
// Member `angular_pos`
#include "geometry_msgs/msg/vector3.h"
// Member `linear_pos`
// Member `angular_pos`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_Goal__init(message_memory);
}

void Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_fini_function(void * message_memory)
{
  software_training__action__Software_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_member_array[2] = {
  {
    "linear_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Goal, linear_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Goal, angular_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_members = {
  "software_training__action",  // message namespace
  "Software_Goal",  // message name
  2,  // number of fields
  sizeof(software_training__action__Software_Goal),
  Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_member_array,  // message members
  Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_type_support_handle = {
  0,
  &Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Goal)() {
  Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_type_support_handle.typesupport_identifier) {
    Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_Goal__rosidl_typesupport_introspection_c__Software_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Software_Result__rosidl_typesupport_introspection_c__Software_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_Result__init(message_memory);
}

void Software_Result__rosidl_typesupport_introspection_c__Software_Result_fini_function(void * message_memory)
{
  software_training__action__Software_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_member_array[1] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Result, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_members = {
  "software_training__action",  // message namespace
  "Software_Result",  // message name
  1,  // number of fields
  sizeof(software_training__action__Software_Result),
  Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_member_array,  // message members
  Software_Result__rosidl_typesupport_introspection_c__Software_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_Result__rosidl_typesupport_introspection_c__Software_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_type_support_handle = {
  0,
  &Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Result)() {
  if (!Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_type_support_handle.typesupport_identifier) {
    Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_Result__rosidl_typesupport_introspection_c__Software_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_Feedback__init(message_memory);
}

void Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_fini_function(void * message_memory)
{
  software_training__action__Software_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_member_array[3] = {
  {
    "x_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Feedback, x_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Feedback, y_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_Feedback, theta_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_members = {
  "software_training__action",  // message namespace
  "Software_Feedback",  // message name
  3,  // number of fields
  sizeof(software_training__action__Software_Feedback),
  Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_member_array,  // message members
  Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_type_support_handle = {
  0,
  &Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Feedback)() {
  if (!Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_type_support_handle.typesupport_identifier) {
    Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_Feedback__rosidl_typesupport_introspection_c__Software_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "software_training/action/software.h"
// Member `goal`
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_SendGoal_Request__init(message_memory);
}

void Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_fini_function(void * message_memory)
{
  software_training__action__Software_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_members = {
  "software_training__action",  // message namespace
  "Software_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(software_training__action__Software_SendGoal_Request),
  Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_member_array,  // message members
  Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_type_support_handle = {
  0,
  &Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Request)() {
  Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Goal)();
  if (!Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_SendGoal_Request__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_SendGoal_Response__init(message_memory);
}

void Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_fini_function(void * message_memory)
{
  software_training__action__Software_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_members = {
  "software_training__action",  // message namespace
  "Software_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(software_training__action__Software_SendGoal_Response),
  Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_member_array,  // message members
  Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_type_support_handle = {
  0,
  &Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Response)() {
  Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_SendGoal_Response__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_members = {
  "software_training__action",  // service namespace
  "Software_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_type_support_handle = {
  0,
  &software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal)() {
  if (!software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_type_support_handle.typesupport_identifier) {
    software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_SendGoal_Response)()->data;
  }

  return &software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_GetResult_Request__init(message_memory);
}

void Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_fini_function(void * message_memory)
{
  software_training__action__Software_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_members = {
  "software_training__action",  // message namespace
  "Software_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(software_training__action__Software_GetResult_Request),
  Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_member_array,  // message members
  Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_type_support_handle = {
  0,
  &Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Request)() {
  Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_GetResult_Request__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "software_training/action/software.h"
// Member `result`
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_GetResult_Response__init(message_memory);
}

void Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_fini_function(void * message_memory)
{
  software_training__action__Software_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_members = {
  "software_training__action",  // message namespace
  "Software_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(software_training__action__Software_GetResult_Response),
  Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_member_array,  // message members
  Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_type_support_handle = {
  0,
  &Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Response)() {
  Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Result)();
  if (!Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_GetResult_Response__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_members = {
  "software_training__action",  // service namespace
  "Software_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_type_support_handle = {
  0,
  &software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult)() {
  if (!software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_type_support_handle.typesupport_identifier) {
    software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_GetResult_Response)()->data;
  }

  return &software_training__action__detail__software__rosidl_typesupport_introspection_c__Software_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/action/detail/software__functions.h"
// already included above
// #include "software_training/action/detail/software__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "software_training/action/software.h"
// Member `feedback`
// already included above
// #include "software_training/action/detail/software__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__action__Software_FeedbackMessage__init(message_memory);
}

void Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_fini_function(void * message_memory)
{
  software_training__action__Software_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__action__Software_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_members = {
  "software_training__action",  // message namespace
  "Software_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(software_training__action__Software_FeedbackMessage),
  Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_member_array,  // message members
  Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_type_support_handle = {
  0,
  &Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_FeedbackMessage)() {
  Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, action, Software_Feedback)();
  if (!Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_FeedbackMessage__rosidl_typesupport_introspection_c__Software_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
