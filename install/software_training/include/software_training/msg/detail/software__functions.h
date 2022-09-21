// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__FUNCTIONS_H_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "software_training/msg/rosidl_generator_c__visibility_control.h"

#include "software_training/msg/detail/software__struct.h"

/// Initialize msg/Software message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * software_training__msg__Software
 * )) before or use
 * software_training__msg__Software__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
bool
software_training__msg__Software__init(software_training__msg__Software * msg);

/// Finalize msg/Software message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
void
software_training__msg__Software__fini(software_training__msg__Software * msg);

/// Create msg/Software message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * software_training__msg__Software__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
software_training__msg__Software *
software_training__msg__Software__create();

/// Destroy msg/Software message.
/**
 * It calls
 * software_training__msg__Software__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
void
software_training__msg__Software__destroy(software_training__msg__Software * msg);


/// Initialize array of msg/Software messages.
/**
 * It allocates the memory for the number of elements and calls
 * software_training__msg__Software__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
bool
software_training__msg__Software__Sequence__init(software_training__msg__Software__Sequence * array, size_t size);

/// Finalize array of msg/Software messages.
/**
 * It calls
 * software_training__msg__Software__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
void
software_training__msg__Software__Sequence__fini(software_training__msg__Software__Sequence * array);

/// Create array of msg/Software messages.
/**
 * It allocates the memory for the array and calls
 * software_training__msg__Software__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
software_training__msg__Software__Sequence *
software_training__msg__Software__Sequence__create(size_t size);

/// Destroy array of msg/Software messages.
/**
 * It calls
 * software_training__msg__Software__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_software_training
void
software_training__msg__Software__Sequence__destroy(software_training__msg__Software__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__FUNCTIONS_H_
