// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cafe_bot:msg/Order.idl
// generated code does not contain a copyright notice

#ifndef CAFE_BOT__MSG__DETAIL__ORDER__FUNCTIONS_H_
#define CAFE_BOT__MSG__DETAIL__ORDER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cafe_bot/msg/rosidl_generator_c__visibility_control.h"

#include "cafe_bot/msg/detail/order__struct.h"

/// Initialize msg/Order message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cafe_bot__msg__Order
 * )) before or use
 * cafe_bot__msg__Order__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__init(cafe_bot__msg__Order * msg);

/// Finalize msg/Order message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
void
cafe_bot__msg__Order__fini(cafe_bot__msg__Order * msg);

/// Create msg/Order message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cafe_bot__msg__Order__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
cafe_bot__msg__Order *
cafe_bot__msg__Order__create();

/// Destroy msg/Order message.
/**
 * It calls
 * cafe_bot__msg__Order__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
void
cafe_bot__msg__Order__destroy(cafe_bot__msg__Order * msg);

/// Check for msg/Order message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__are_equal(const cafe_bot__msg__Order * lhs, const cafe_bot__msg__Order * rhs);

/// Copy a msg/Order message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__copy(
  const cafe_bot__msg__Order * input,
  cafe_bot__msg__Order * output);

/// Initialize array of msg/Order messages.
/**
 * It allocates the memory for the number of elements and calls
 * cafe_bot__msg__Order__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__Sequence__init(cafe_bot__msg__Order__Sequence * array, size_t size);

/// Finalize array of msg/Order messages.
/**
 * It calls
 * cafe_bot__msg__Order__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
void
cafe_bot__msg__Order__Sequence__fini(cafe_bot__msg__Order__Sequence * array);

/// Create array of msg/Order messages.
/**
 * It allocates the memory for the array and calls
 * cafe_bot__msg__Order__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
cafe_bot__msg__Order__Sequence *
cafe_bot__msg__Order__Sequence__create(size_t size);

/// Destroy array of msg/Order messages.
/**
 * It calls
 * cafe_bot__msg__Order__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
void
cafe_bot__msg__Order__Sequence__destroy(cafe_bot__msg__Order__Sequence * array);

/// Check for msg/Order message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__Sequence__are_equal(const cafe_bot__msg__Order__Sequence * lhs, const cafe_bot__msg__Order__Sequence * rhs);

/// Copy an array of msg/Order messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cafe_bot
bool
cafe_bot__msg__Order__Sequence__copy(
  const cafe_bot__msg__Order__Sequence * input,
  cafe_bot__msg__Order__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAFE_BOT__MSG__DETAIL__ORDER__FUNCTIONS_H_
