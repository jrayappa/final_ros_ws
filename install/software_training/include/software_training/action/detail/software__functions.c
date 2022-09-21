// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice
#include "software_training/action/detail/software__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `linear_pos`
// Member `angular_pos`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
software_training__action__Software_Goal__init(software_training__action__Software_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // linear_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_pos)) {
    software_training__action__Software_Goal__fini(msg);
    return false;
  }
  // angular_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_pos)) {
    software_training__action__Software_Goal__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_Goal__fini(software_training__action__Software_Goal * msg)
{
  if (!msg) {
    return;
  }
  // linear_pos
  geometry_msgs__msg__Vector3__fini(&msg->linear_pos);
  // angular_pos
  geometry_msgs__msg__Vector3__fini(&msg->angular_pos);
}

software_training__action__Software_Goal *
software_training__action__Software_Goal__create()
{
  software_training__action__Software_Goal * msg = (software_training__action__Software_Goal *)malloc(sizeof(software_training__action__Software_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_Goal));
  bool success = software_training__action__Software_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_Goal__destroy(software_training__action__Software_Goal * msg)
{
  if (msg) {
    software_training__action__Software_Goal__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_Goal__Sequence__init(software_training__action__Software_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_Goal * data = NULL;
  if (size) {
    data = (software_training__action__Software_Goal *)calloc(size, sizeof(software_training__action__Software_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_Goal__Sequence__fini(software_training__action__Software_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_Goal__Sequence *
software_training__action__Software_Goal__Sequence__create(size_t size)
{
  software_training__action__Software_Goal__Sequence * array = (software_training__action__Software_Goal__Sequence *)malloc(sizeof(software_training__action__Software_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_Goal__Sequence__destroy(software_training__action__Software_Goal__Sequence * array)
{
  if (array) {
    software_training__action__Software_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
software_training__action__Software_Result__init(software_training__action__Software_Result * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  return true;
}

void
software_training__action__Software_Result__fini(software_training__action__Software_Result * msg)
{
  if (!msg) {
    return;
  }
  // duration
}

software_training__action__Software_Result *
software_training__action__Software_Result__create()
{
  software_training__action__Software_Result * msg = (software_training__action__Software_Result *)malloc(sizeof(software_training__action__Software_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_Result));
  bool success = software_training__action__Software_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_Result__destroy(software_training__action__Software_Result * msg)
{
  if (msg) {
    software_training__action__Software_Result__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_Result__Sequence__init(software_training__action__Software_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_Result * data = NULL;
  if (size) {
    data = (software_training__action__Software_Result *)calloc(size, sizeof(software_training__action__Software_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_Result__Sequence__fini(software_training__action__Software_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_Result__Sequence *
software_training__action__Software_Result__Sequence__create(size_t size)
{
  software_training__action__Software_Result__Sequence * array = (software_training__action__Software_Result__Sequence *)malloc(sizeof(software_training__action__Software_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_Result__Sequence__destroy(software_training__action__Software_Result__Sequence * array)
{
  if (array) {
    software_training__action__Software_Result__Sequence__fini(array);
  }
  free(array);
}


bool
software_training__action__Software_Feedback__init(software_training__action__Software_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // x_pos
  // y_pos
  // theta_pos
  return true;
}

void
software_training__action__Software_Feedback__fini(software_training__action__Software_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // x_pos
  // y_pos
  // theta_pos
}

software_training__action__Software_Feedback *
software_training__action__Software_Feedback__create()
{
  software_training__action__Software_Feedback * msg = (software_training__action__Software_Feedback *)malloc(sizeof(software_training__action__Software_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_Feedback));
  bool success = software_training__action__Software_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_Feedback__destroy(software_training__action__Software_Feedback * msg)
{
  if (msg) {
    software_training__action__Software_Feedback__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_Feedback__Sequence__init(software_training__action__Software_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_Feedback * data = NULL;
  if (size) {
    data = (software_training__action__Software_Feedback *)calloc(size, sizeof(software_training__action__Software_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_Feedback__Sequence__fini(software_training__action__Software_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_Feedback__Sequence *
software_training__action__Software_Feedback__Sequence__create(size_t size)
{
  software_training__action__Software_Feedback__Sequence * array = (software_training__action__Software_Feedback__Sequence *)malloc(sizeof(software_training__action__Software_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_Feedback__Sequence__destroy(software_training__action__Software_Feedback__Sequence * array)
{
  if (array) {
    software_training__action__Software_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "software_training/action/detail/software__functions.h"

bool
software_training__action__Software_SendGoal_Request__init(software_training__action__Software_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    software_training__action__Software_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!software_training__action__Software_Goal__init(&msg->goal)) {
    software_training__action__Software_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_SendGoal_Request__fini(software_training__action__Software_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  software_training__action__Software_Goal__fini(&msg->goal);
}

software_training__action__Software_SendGoal_Request *
software_training__action__Software_SendGoal_Request__create()
{
  software_training__action__Software_SendGoal_Request * msg = (software_training__action__Software_SendGoal_Request *)malloc(sizeof(software_training__action__Software_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_SendGoal_Request));
  bool success = software_training__action__Software_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_SendGoal_Request__destroy(software_training__action__Software_SendGoal_Request * msg)
{
  if (msg) {
    software_training__action__Software_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_SendGoal_Request__Sequence__init(software_training__action__Software_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_SendGoal_Request * data = NULL;
  if (size) {
    data = (software_training__action__Software_SendGoal_Request *)calloc(size, sizeof(software_training__action__Software_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_SendGoal_Request__Sequence__fini(software_training__action__Software_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_SendGoal_Request__Sequence *
software_training__action__Software_SendGoal_Request__Sequence__create(size_t size)
{
  software_training__action__Software_SendGoal_Request__Sequence * array = (software_training__action__Software_SendGoal_Request__Sequence *)malloc(sizeof(software_training__action__Software_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_SendGoal_Request__Sequence__destroy(software_training__action__Software_SendGoal_Request__Sequence * array)
{
  if (array) {
    software_training__action__Software_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
software_training__action__Software_SendGoal_Response__init(software_training__action__Software_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    software_training__action__Software_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_SendGoal_Response__fini(software_training__action__Software_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

software_training__action__Software_SendGoal_Response *
software_training__action__Software_SendGoal_Response__create()
{
  software_training__action__Software_SendGoal_Response * msg = (software_training__action__Software_SendGoal_Response *)malloc(sizeof(software_training__action__Software_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_SendGoal_Response));
  bool success = software_training__action__Software_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_SendGoal_Response__destroy(software_training__action__Software_SendGoal_Response * msg)
{
  if (msg) {
    software_training__action__Software_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_SendGoal_Response__Sequence__init(software_training__action__Software_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_SendGoal_Response * data = NULL;
  if (size) {
    data = (software_training__action__Software_SendGoal_Response *)calloc(size, sizeof(software_training__action__Software_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_SendGoal_Response__Sequence__fini(software_training__action__Software_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_SendGoal_Response__Sequence *
software_training__action__Software_SendGoal_Response__Sequence__create(size_t size)
{
  software_training__action__Software_SendGoal_Response__Sequence * array = (software_training__action__Software_SendGoal_Response__Sequence *)malloc(sizeof(software_training__action__Software_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_SendGoal_Response__Sequence__destroy(software_training__action__Software_SendGoal_Response__Sequence * array)
{
  if (array) {
    software_training__action__Software_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
software_training__action__Software_GetResult_Request__init(software_training__action__Software_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    software_training__action__Software_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_GetResult_Request__fini(software_training__action__Software_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

software_training__action__Software_GetResult_Request *
software_training__action__Software_GetResult_Request__create()
{
  software_training__action__Software_GetResult_Request * msg = (software_training__action__Software_GetResult_Request *)malloc(sizeof(software_training__action__Software_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_GetResult_Request));
  bool success = software_training__action__Software_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_GetResult_Request__destroy(software_training__action__Software_GetResult_Request * msg)
{
  if (msg) {
    software_training__action__Software_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_GetResult_Request__Sequence__init(software_training__action__Software_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_GetResult_Request * data = NULL;
  if (size) {
    data = (software_training__action__Software_GetResult_Request *)calloc(size, sizeof(software_training__action__Software_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_GetResult_Request__Sequence__fini(software_training__action__Software_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_GetResult_Request__Sequence *
software_training__action__Software_GetResult_Request__Sequence__create(size_t size)
{
  software_training__action__Software_GetResult_Request__Sequence * array = (software_training__action__Software_GetResult_Request__Sequence *)malloc(sizeof(software_training__action__Software_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_GetResult_Request__Sequence__destroy(software_training__action__Software_GetResult_Request__Sequence * array)
{
  if (array) {
    software_training__action__Software_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "software_training/action/detail/software__functions.h"

bool
software_training__action__Software_GetResult_Response__init(software_training__action__Software_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!software_training__action__Software_Result__init(&msg->result)) {
    software_training__action__Software_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_GetResult_Response__fini(software_training__action__Software_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  software_training__action__Software_Result__fini(&msg->result);
}

software_training__action__Software_GetResult_Response *
software_training__action__Software_GetResult_Response__create()
{
  software_training__action__Software_GetResult_Response * msg = (software_training__action__Software_GetResult_Response *)malloc(sizeof(software_training__action__Software_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_GetResult_Response));
  bool success = software_training__action__Software_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_GetResult_Response__destroy(software_training__action__Software_GetResult_Response * msg)
{
  if (msg) {
    software_training__action__Software_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_GetResult_Response__Sequence__init(software_training__action__Software_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_GetResult_Response * data = NULL;
  if (size) {
    data = (software_training__action__Software_GetResult_Response *)calloc(size, sizeof(software_training__action__Software_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_GetResult_Response__Sequence__fini(software_training__action__Software_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_GetResult_Response__Sequence *
software_training__action__Software_GetResult_Response__Sequence__create(size_t size)
{
  software_training__action__Software_GetResult_Response__Sequence * array = (software_training__action__Software_GetResult_Response__Sequence *)malloc(sizeof(software_training__action__Software_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_GetResult_Response__Sequence__destroy(software_training__action__Software_GetResult_Response__Sequence * array)
{
  if (array) {
    software_training__action__Software_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "software_training/action/detail/software__functions.h"

bool
software_training__action__Software_FeedbackMessage__init(software_training__action__Software_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    software_training__action__Software_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!software_training__action__Software_Feedback__init(&msg->feedback)) {
    software_training__action__Software_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
software_training__action__Software_FeedbackMessage__fini(software_training__action__Software_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  software_training__action__Software_Feedback__fini(&msg->feedback);
}

software_training__action__Software_FeedbackMessage *
software_training__action__Software_FeedbackMessage__create()
{
  software_training__action__Software_FeedbackMessage * msg = (software_training__action__Software_FeedbackMessage *)malloc(sizeof(software_training__action__Software_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__action__Software_FeedbackMessage));
  bool success = software_training__action__Software_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__action__Software_FeedbackMessage__destroy(software_training__action__Software_FeedbackMessage * msg)
{
  if (msg) {
    software_training__action__Software_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
software_training__action__Software_FeedbackMessage__Sequence__init(software_training__action__Software_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__action__Software_FeedbackMessage * data = NULL;
  if (size) {
    data = (software_training__action__Software_FeedbackMessage *)calloc(size, sizeof(software_training__action__Software_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__action__Software_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__action__Software_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
software_training__action__Software_FeedbackMessage__Sequence__fini(software_training__action__Software_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__action__Software_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

software_training__action__Software_FeedbackMessage__Sequence *
software_training__action__Software_FeedbackMessage__Sequence__create(size_t size)
{
  software_training__action__Software_FeedbackMessage__Sequence * array = (software_training__action__Software_FeedbackMessage__Sequence *)malloc(sizeof(software_training__action__Software_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__action__Software_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__action__Software_FeedbackMessage__Sequence__destroy(software_training__action__Software_FeedbackMessage__Sequence * array)
{
  if (array) {
    software_training__action__Software_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
