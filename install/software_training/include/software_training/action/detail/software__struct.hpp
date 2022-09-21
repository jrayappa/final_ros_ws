// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_HPP_
#define SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'linear_pos'
// Member 'angular_pos'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_Goal __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_Goal __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_Goal_
{
  using Type = Software_Goal_<ContainerAllocator>;

  explicit Software_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_pos(_init),
    angular_pos(_init)
  {
    (void)_init;
  }

  explicit Software_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_pos(_alloc, _init),
    angular_pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_pos_type linear_pos;
  using _angular_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_pos_type angular_pos;

  // setters for named parameter idiom
  Type & set__linear_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_pos = _arg;
    return *this;
  }
  Type & set__angular_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_Goal
    std::shared_ptr<software_training::action::Software_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_Goal
    std::shared_ptr<software_training::action::Software_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_Goal_ & other) const
  {
    if (this->linear_pos != other.linear_pos) {
      return false;
    }
    if (this->angular_pos != other.angular_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_Goal_

// alias to use template instance with default allocator
using Software_Goal =
  software_training::action::Software_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training


#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_Result __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_Result __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_Result_
{
  using Type = Software_Result_<ContainerAllocator>;

  explicit Software_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0ull;
    }
  }

  explicit Software_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0ull;
    }
  }

  // field types and members
  using _duration_type =
    uint64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__duration(
    const uint64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_Result
    std::shared_ptr<software_training::action::Software_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_Result
    std::shared_ptr<software_training::action::Software_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_Result_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_Result_

// alias to use template instance with default allocator
using Software_Result =
  software_training::action::Software_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training


#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_Feedback __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_Feedback_
{
  using Type = Software_Feedback_<ContainerAllocator>;

  explicit Software_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->theta_pos = 0.0f;
    }
  }

  explicit Software_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->theta_pos = 0.0f;
    }
  }

  // field types and members
  using _x_pos_type =
    float;
  _x_pos_type x_pos;
  using _y_pos_type =
    float;
  _y_pos_type y_pos;
  using _theta_pos_type =
    float;
  _theta_pos_type theta_pos;

  // setters for named parameter idiom
  Type & set__x_pos(
    const float & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const float & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__theta_pos(
    const float & _arg)
  {
    this->theta_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_Feedback
    std::shared_ptr<software_training::action::Software_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_Feedback
    std::shared_ptr<software_training::action::Software_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_Feedback_ & other) const
  {
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->theta_pos != other.theta_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_Feedback_

// alias to use template instance with default allocator
using Software_Feedback =
  software_training::action::Software_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "software_training/action/detail/software__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_SendGoal_Request __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_SendGoal_Request_
{
  using Type = Software_SendGoal_Request_<ContainerAllocator>;

  explicit Software_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Software_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    software_training::action::Software_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const software_training::action::Software_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_SendGoal_Request
    std::shared_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_SendGoal_Request
    std::shared_ptr<software_training::action::Software_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_SendGoal_Request_

// alias to use template instance with default allocator
using Software_SendGoal_Request =
  software_training::action::Software_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_SendGoal_Response __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_SendGoal_Response_
{
  using Type = Software_SendGoal_Response_<ContainerAllocator>;

  explicit Software_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Software_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_SendGoal_Response
    std::shared_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_SendGoal_Response
    std::shared_ptr<software_training::action::Software_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_SendGoal_Response_

// alias to use template instance with default allocator
using Software_SendGoal_Response =
  software_training::action::Software_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training

namespace software_training
{

namespace action
{

struct Software_SendGoal
{
  using Request = software_training::action::Software_SendGoal_Request;
  using Response = software_training::action::Software_SendGoal_Response;
};

}  // namespace action

}  // namespace software_training


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_GetResult_Request __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_GetResult_Request_
{
  using Type = Software_GetResult_Request_<ContainerAllocator>;

  explicit Software_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Software_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_GetResult_Request
    std::shared_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_GetResult_Request
    std::shared_ptr<software_training::action::Software_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_GetResult_Request_

// alias to use template instance with default allocator
using Software_GetResult_Request =
  software_training::action::Software_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training


// Include directives for member types
// Member 'result'
// already included above
// #include "software_training/action/detail/software__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_GetResult_Response __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_GetResult_Response_
{
  using Type = Software_GetResult_Response_<ContainerAllocator>;

  explicit Software_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Software_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    software_training::action::Software_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const software_training::action::Software_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_GetResult_Response
    std::shared_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_GetResult_Response
    std::shared_ptr<software_training::action::Software_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_GetResult_Response_

// alias to use template instance with default allocator
using Software_GetResult_Response =
  software_training::action::Software_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training

namespace software_training
{

namespace action
{

struct Software_GetResult
{
  using Request = software_training::action::Software_GetResult_Request;
  using Response = software_training::action::Software_GetResult_Response;
};

}  // namespace action

}  // namespace software_training


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "software_training/action/detail/software__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__software_training__action__Software_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__software_training__action__Software_FeedbackMessage __declspec(deprecated)
#endif

namespace software_training
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Software_FeedbackMessage_
{
  using Type = Software_FeedbackMessage_<ContainerAllocator>;

  explicit Software_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Software_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    software_training::action::Software_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const software_training::action::Software_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    software_training::action::Software_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const software_training::action::Software_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      software_training::action::Software_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__software_training__action__Software_FeedbackMessage
    std::shared_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__software_training__action__Software_FeedbackMessage
    std::shared_ptr<software_training::action::Software_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Software_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Software_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Software_FeedbackMessage_

// alias to use template instance with default allocator
using Software_FeedbackMessage =
  software_training::action::Software_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace software_training

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace software_training
{

namespace action
{

struct Software
{
  /// The goal message defined in the action definition.
  using Goal = software_training::action::Software_Goal;
  /// The result message defined in the action definition.
  using Result = software_training::action::Software_Result;
  /// The feedback message defined in the action definition.
  using Feedback = software_training::action::Software_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = software_training::action::Software_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = software_training::action::Software_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = software_training::action::Software_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Software Software;

}  // namespace action

}  // namespace software_training

#endif  // SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__STRUCT_HPP_
