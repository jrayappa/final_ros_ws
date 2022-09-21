// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from software_training:srv/Software.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "software_training/msg/rosidl_typesupport_c__visibility_control.h"
#include "software_training/srv/detail/software__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Software_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_Request_type_support_ids_t;

static const _Software_Request_type_support_ids_t _Software_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Software_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_Request_type_support_symbol_names_t _Software_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, software_training, srv, Software_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Request)),
  }
};

typedef struct _Software_Request_type_support_data_t
{
  void * data[2];
} _Software_Request_type_support_data_t;

static _Software_Request_type_support_data_t _Software_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_Request_message_typesupport_map = {
  2,
  "software_training",
  &_Software_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Software_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Software_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace software_training

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, software_training, srv, Software_Request)() {
  return &::software_training::srv::rosidl_typesupport_c::Software_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "software_training/srv/detail/software__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Software_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_Response_type_support_ids_t;

static const _Software_Response_type_support_ids_t _Software_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Software_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_Response_type_support_symbol_names_t _Software_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, software_training, srv, Software_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software_Response)),
  }
};

typedef struct _Software_Response_type_support_data_t
{
  void * data[2];
} _Software_Response_type_support_data_t;

static _Software_Response_type_support_data_t _Software_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_Response_message_typesupport_map = {
  2,
  "software_training",
  &_Software_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Software_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Software_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace software_training

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_software_training
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, software_training, srv, Software_Response)() {
  return &::software_training::srv::rosidl_typesupport_c::Software_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Software_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_type_support_ids_t;

static const _Software_type_support_ids_t _Software_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Software_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_type_support_symbol_names_t _Software_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, software_training, srv, Software)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, software_training, srv, Software)),
  }
};

typedef struct _Software_type_support_data_t
{
  void * data[2];
} _Software_type_support_data_t;

static _Software_type_support_data_t _Software_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_service_typesupport_map = {
  2,
  "software_training",
  &_Software_service_typesupport_ids.typesupport_identifier[0],
  &_Software_service_typesupport_symbol_names.symbol_name[0],
  &_Software_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Software_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace software_training

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_software_training
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, software_training, srv, Software)() {
  return &::software_training::srv::rosidl_typesupport_c::Software_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
