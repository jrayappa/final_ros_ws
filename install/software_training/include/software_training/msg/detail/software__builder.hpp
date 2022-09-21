// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from software_training:msg/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__BUILDER_HPP_
#define SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__BUILDER_HPP_

#include "software_training/msg/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace software_training
{

namespace msg
{

namespace builder
{

class Init_Software_distance
{
public:
  explicit Init_Software_distance(::software_training::msg::Software & msg)
  : msg_(msg)
  {}
  ::software_training::msg::Software distance(::software_training::msg::Software::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::msg::Software msg_;
};

class Init_Software_y_pos
{
public:
  explicit Init_Software_y_pos(::software_training::msg::Software & msg)
  : msg_(msg)
  {}
  Init_Software_distance y_pos(::software_training::msg::Software::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_Software_distance(msg_);
  }

private:
  ::software_training::msg::Software msg_;
};

class Init_Software_x_pos
{
public:
  Init_Software_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_y_pos x_pos(::software_training::msg::Software::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Software_y_pos(msg_);
  }

private:
  ::software_training::msg::Software msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::msg::Software>()
{
  return software_training::msg::builder::Init_Software_x_pos();
}

}  // namespace software_training

#endif  // SOFTWARE_TRAINING__MSG__DETAIL__SOFTWARE__BUILDER_HPP_
