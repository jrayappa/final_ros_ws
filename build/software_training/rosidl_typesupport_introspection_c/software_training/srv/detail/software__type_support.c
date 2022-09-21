// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from software_training:srv/Software.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "software_training/srv/detail/software__rosidl_typesupport_introspection_c.h"
#include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "software_training/srv/detail/software__functions.h"
#include "software_training/srv/detail/software__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Software_Request__rosidl_typesupport_introspection_c__Software_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__srv__Software_Request__init(message_memory);
}

void Software_Request__rosidl_typesupport_introspection_c__Software_Request_fini_function(void * message_memory)
{
  software_training__srv__Software_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__srv__Software_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_members = {
  "software_training__srv",  // message namespace
  "Software_Request",  // message name
  1,  // number of fields
  sizeof(software_training__srv__Software_Request),
  Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_member_array,  // message members
  Software_Request__rosidl_typesupport_introspection_c__Software_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_Request__rosidl_typesupport_introspection_c__Software_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_type_support_handle = {
  0,
  &Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Request)() {
  if (!Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_type_support_handle.typesupport_identifier) {
    Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_Request__rosidl_typesupport_introspection_c__Software_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "software_training/srv/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "software_training/srv/detail/software__functions.h"
// already included above
// #include "software_training/srv/detail/software__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Software_Response__rosidl_typesupport_introspection_c__Software_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  software_training__srv__Software_Response__init(message_memory);
}

void Software_Response__rosidl_typesupport_introspection_c__Software_Response_fini_function(void * message_memory)
{
  software_training__srv__Software_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(software_training__srv__Software_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_members = {
  "software_training__srv",  // message namespace
  "Software_Response",  // message name
  1,  // number of fields
  sizeof(software_training__srv__Software_Response),
  Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_member_array,  // message members
  Software_Response__rosidl_typesupport_introspection_c__Software_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Software_Response__rosidl_typesupport_introspection_c__Software_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_type_support_handle = {
  0,
  &Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Response)() {
  if (!Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_type_support_handle.typesupport_identifier) {
    Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Software_Response__rosidl_typesupport_introspection_c__Software_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "software_training/srv/detail/software__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_members = {
  "software_training__srv",  // service namespace
  "Software",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_Request_message_type_support_handle,
  NULL  // response message
  // software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_Response_message_type_support_handle
};

static rosidl_service_type_support_t software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_type_support_handle = {
  0,
  &software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_software_training
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software)() {
  if (!software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_type_support_handle.typesupport_identifier) {
    software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Response)()->data;
  }

  return &software_training__srv__detail__software__rosidl_typesupport_introspection_c__Software_service_type_support_handle;
}
