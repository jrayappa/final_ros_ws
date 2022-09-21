// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "software_training/action/detail/software__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_Goal_type_support_ids_t;

static const _Software_Goal_type_support_ids_t _Software_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_Goal_type_support_symbol_names_t _Software_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_Goal)),
  }
};

typedef struct _Software_Goal_type_support_data_t
{
  void * data[2];
} _Software_Goal_type_support_data_t;

static _Software_Goal_type_support_data_t _Software_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_Goal_message_typesupport_map = {
  2,
  "software_training",
  &_Software_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Software_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Software_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_Goal>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_Goal)() {
  return get_message_type_support_handle<software_training::action::Software_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_Result_type_support_ids_t;

static const _Software_Result_type_support_ids_t _Software_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_Result_type_support_symbol_names_t _Software_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_Result)),
  }
};

typedef struct _Software_Result_type_support_data_t
{
  void * data[2];
} _Software_Result_type_support_data_t;

static _Software_Result_type_support_data_t _Software_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_Result_message_typesupport_map = {
  2,
  "software_training",
  &_Software_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Software_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Software_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_Result>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_Result)() {
  return get_message_type_support_handle<software_training::action::Software_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_Feedback_type_support_ids_t;

static const _Software_Feedback_type_support_ids_t _Software_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_Feedback_type_support_symbol_names_t _Software_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_Feedback)),
  }
};

typedef struct _Software_Feedback_type_support_data_t
{
  void * data[2];
} _Software_Feedback_type_support_data_t;

static _Software_Feedback_type_support_data_t _Software_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_Feedback_message_typesupport_map = {
  2,
  "software_training",
  &_Software_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Software_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Software_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_Feedback>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_Feedback)() {
  return get_message_type_support_handle<software_training::action::Software_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_SendGoal_Request_type_support_ids_t;

static const _Software_SendGoal_Request_type_support_ids_t _Software_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_SendGoal_Request_type_support_symbol_names_t _Software_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_SendGoal_Request)),
  }
};

typedef struct _Software_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Software_SendGoal_Request_type_support_data_t;

static _Software_SendGoal_Request_type_support_data_t _Software_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_SendGoal_Request_message_typesupport_map = {
  2,
  "software_training",
  &_Software_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Software_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Software_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_SendGoal_Request>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_SendGoal_Request)() {
  return get_message_type_support_handle<software_training::action::Software_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_SendGoal_Response_type_support_ids_t;

static const _Software_SendGoal_Response_type_support_ids_t _Software_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_SendGoal_Response_type_support_symbol_names_t _Software_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_SendGoal_Response)),
  }
};

typedef struct _Software_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Software_SendGoal_Response_type_support_data_t;

static _Software_SendGoal_Response_type_support_data_t _Software_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_SendGoal_Response_message_typesupport_map = {
  2,
  "software_training",
  &_Software_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Software_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Software_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_SendGoal_Response>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_SendGoal_Response)() {
  return get_message_type_support_handle<software_training::action::Software_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_SendGoal_type_support_ids_t;

static const _Software_SendGoal_type_support_ids_t _Software_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_SendGoal_type_support_symbol_names_t _Software_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_SendGoal)),
  }
};

typedef struct _Software_SendGoal_type_support_data_t
{
  void * data[2];
} _Software_SendGoal_type_support_data_t;

static _Software_SendGoal_type_support_data_t _Software_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_SendGoal_service_typesupport_map = {
  2,
  "software_training",
  &_Software_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Software_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Software_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Software_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<software_training::action::Software_SendGoal>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_GetResult_Request_type_support_ids_t;

static const _Software_GetResult_Request_type_support_ids_t _Software_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_GetResult_Request_type_support_symbol_names_t _Software_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_GetResult_Request)),
  }
};

typedef struct _Software_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Software_GetResult_Request_type_support_data_t;

static _Software_GetResult_Request_type_support_data_t _Software_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_GetResult_Request_message_typesupport_map = {
  2,
  "software_training",
  &_Software_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Software_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Software_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_GetResult_Request>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_GetResult_Request)() {
  return get_message_type_support_handle<software_training::action::Software_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_GetResult_Response_type_support_ids_t;

static const _Software_GetResult_Response_type_support_ids_t _Software_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_GetResult_Response_type_support_symbol_names_t _Software_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_GetResult_Response)),
  }
};

typedef struct _Software_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Software_GetResult_Response_type_support_data_t;

static _Software_GetResult_Response_type_support_data_t _Software_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_GetResult_Response_message_typesupport_map = {
  2,
  "software_training",
  &_Software_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Software_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Software_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_GetResult_Response>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_GetResult_Response)() {
  return get_message_type_support_handle<software_training::action::Software_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_GetResult_type_support_ids_t;

static const _Software_GetResult_type_support_ids_t _Software_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_GetResult_type_support_symbol_names_t _Software_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_GetResult)),
  }
};

typedef struct _Software_GetResult_type_support_data_t
{
  void * data[2];
} _Software_GetResult_type_support_data_t;

static _Software_GetResult_type_support_data_t _Software_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_GetResult_service_typesupport_map = {
  2,
  "software_training",
  &_Software_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Software_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Software_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Software_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<software_training::action::Software_GetResult>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Software_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Software_FeedbackMessage_type_support_ids_t;

static const _Software_FeedbackMessage_type_support_ids_t _Software_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Software_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Software_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Software_FeedbackMessage_type_support_symbol_names_t _Software_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, software_training, action, Software_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, software_training, action, Software_FeedbackMessage)),
  }
};

typedef struct _Software_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Software_FeedbackMessage_type_support_data_t;

static _Software_FeedbackMessage_type_support_data_t _Software_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Software_FeedbackMessage_message_typesupport_map = {
  2,
  "software_training",
  &_Software_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Software_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Software_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Software_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Software_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<software_training::action::Software_FeedbackMessage>()
{
  return &::software_training::action::rosidl_typesupport_cpp::Software_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, software_training, action, Software_FeedbackMessage)() {
  return get_message_type_support_handle<software_training::action::Software_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "software_training/action/detail/software__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace software_training
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Software_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace software_training

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<software_training::action::Software>()
{
  using ::software_training::action::rosidl_typesupport_cpp::Software_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Software_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::software_training::action::Software::Impl::SendGoalService>();
  Software_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::software_training::action::Software::Impl::GetResultService>();
  Software_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::software_training::action::Software::Impl::CancelGoalService>();
  Software_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::software_training::action::Software::Impl::FeedbackMessage>();
  Software_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::software_training::action::Software::Impl::GoalStatusMessage>();
  return &Software_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
