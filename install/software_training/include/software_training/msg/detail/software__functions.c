// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice
#include "software_training/msg/detail/software__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
software_training__msg__Software__init(software_training__msg__Software * msg)
{
  if (!msg) {
    return false;
  }
  // x_pos
  // y_pos
  // distance
  return true;
}

void
software_training__msg__Software__fini(software_training__msg__Software * msg)
{
  if (!msg) {
    return;
  }
  // x_pos
  // y_pos
  // distance
}

software_training__msg__Software *
software_training__msg__Software__create()
{
  software_training__msg__Software * msg = (software_training__msg__Software *)malloc(sizeof(software_training__msg__Software));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(software_training__msg__Software));
  bool success = software_training__msg__Software__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
software_training__msg__Software__destroy(software_training__msg__Software * msg)
{
  if (msg) {
    software_training__msg__Software__fini(msg);
  }
  free(msg);
}


bool
software_training__msg__Software__Sequence__init(software_training__msg__Software__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  software_training__msg__Software * data = NULL;
  if (size) {
    data = (software_training__msg__Software *)calloc(size, sizeof(software_training__msg__Software));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = software_training__msg__Software__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        software_training__msg__Software__fini(&data[i - 1]);
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
software_training__msg__Software__Sequence__fini(software_training__msg__Software__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      software_training__msg__Software__fini(&array->data[i]);
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

software_training__msg__Software__Sequence *
software_training__msg__Software__Sequence__create(size_t size)
{
  software_training__msg__Software__Sequence * array = (software_training__msg__Software__Sequence *)malloc(sizeof(software_training__msg__Software__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = software_training__msg__Software__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
software_training__msg__Software__Sequence__destroy(software_training__msg__Software__Sequence * array)
{
  if (array) {
    software_training__msg__Software__Sequence__fini(array);
  }
  free(array);
}
