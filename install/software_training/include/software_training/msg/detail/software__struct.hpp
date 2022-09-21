// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_HPP_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__software_training__msg__Software __attribute__((deprecated))
#else
# define DEPRECATED__software_training__msg__Software __declspec(deprecated)
#endif

namespace software_training
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Software_
{
  using Type = Software_<ContainerAllocator>;

  explicit Software_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0;
      this->y_pos = 0.0;
      this->distance = 0.0;
    }
  }

  explicit Software_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0;
      this->y_pos = 0.0;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _x_pos_type =
    double;
  _x_pos_type x_pos;
  using _y_pos_type =
    double;
  _y_pos_type y_pos;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__x_pos(
    const double & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const double & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::msg::Software_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::msg::Software_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::msg::Software_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::msg::Software_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::msg::Software_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::msg::Software_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::msg::Software_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::msg::Software_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::msg::Software_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::msg::Software_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__msg__Software
    std::shared_ptr<software_training::msg::Software_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__msg__Software
    std::shared_ptr<software_training::msg::Software_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_ & other) const
  {
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_

// alias to use template instance with default allocator
using Software =
  software_training::msg::Software_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace software_training

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__STRUCT_HPP_
