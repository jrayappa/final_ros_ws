// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from software_training:srv/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__BUILDER_HPP_
#define SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__BUILDER_HPP_

#include "software_training/srv/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace software_training
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::srv::Software_Request>()
{
  return ::software_training::srv::Software_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace software_training


namespace software_training
{

namespace srv
{

namespace builder
{

class Init_Software_Response_success
{
public:
  Init_Software_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::software_training::srv::Software_Response success(::software_training::srv::Software_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::srv::Software_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::srv::Software_Response>()
{
  return software_training::srv::builder::Init_Software_Response_success();
}

}  // namespace software_training

#endif  // SOFTWARE_TRAINING__SRV__DETAIL__SOFTWARE__BUILDER_HPP_
