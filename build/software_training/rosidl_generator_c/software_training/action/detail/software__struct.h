// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_H_
#define SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear_pos'
// Member 'angular_pos'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_Goal
{
  geometry_msgs__msg__Vector3 linear_pos;
  geometry_msgs__msg__Vector3 angular_pos;
} software_training__action__Software_Goal;

// Struct for a sequence of software_training__action__Software_Goal.
typedef struct software_training__action__Software_Goal__Sequence
{
  software_training__action__Software_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_Result
{
  uint64_t duration;
} software_training__action__Software_Result;

// Struct for a sequence of software_training__action__Software_Result.
typedef struct software_training__action__Software_Result__Sequence
{
  software_training__action__Software_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_Feedback
{
  float x_pos;
  float y_pos;
  float theta_pos;
} software_training__action__Software_Feedback;

// Struct for a sequence of software_training__action__Software_Feedback.
typedef struct software_training__action__Software_Feedback__Sequence
{
  software_training__action__Software_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "software_training/action/detail/software__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  software_training__action__Software_Goal goal;
} software_training__action__Software_SendGoal_Request;

// Struct for a sequence of software_training__action__Software_SendGoal_Request.
typedef struct software_training__action__Software_SendGoal_Request__Sequence
{
  software_training__action__Software_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} software_training__action__Software_SendGoal_Response;

// Struct for a sequence of software_training__action__Software_SendGoal_Response.
typedef struct software_training__action__Software_SendGoal_Response__Sequence
{
  software_training__action__Software_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} software_training__action__Software_GetResult_Request;

// Struct for a sequence of software_training__action__Software_GetResult_Request.
typedef struct software_training__action__Software_GetResult_Request__Sequence
{
  software_training__action__Software_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "software_training/action/detail/software__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_GetResult_Response
{
  int8_t status;
  software_training__action__Software_Result result;
} software_training__action__Software_GetResult_Response;

// Struct for a sequence of software_training__action__Software_GetResult_Response.
typedef struct software_training__action__Software_GetResult_Response__Sequence
{
  software_training__action__Software_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "software_training/action/detail/software__struct.h"

// Struct defined in action/Software in the package software_training.
typedef struct software_training__action__Software_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  software_training__action__Software_Feedback feedback;
} software_training__action__Software_FeedbackMessage;

// Struct for a sequence of software_training__action__Software_FeedbackMessage.
typedef struct software_training__action__Software_FeedbackMessage__Sequence
{
  software_training__action__Software_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} software_training__action__Software_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_H_
