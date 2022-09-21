// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__BUILDER_HPP_
#define SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__BUILDER_HPP_

#include "software_training/action/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_Goal_angular_pos
{
public:
  explicit Init_Software_Goal_angular_pos(::software_training::action::Software_Goal & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_Goal angular_pos(::software_training::action::Software_Goal::_angular_pos_type arg)
  {
    msg_.angular_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_Goal msg_;
};

class Init_Software_Goal_linear_pos
{
public:
  Init_Software_Goal_linear_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_Goal_angular_pos linear_pos(::software_training::action::Software_Goal::_linear_pos_type arg)
  {
    msg_.linear_pos = std::move(arg);
    return Init_Software_Goal_angular_pos(msg_);
  }

private:
  ::software_training::action::Software_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_Goal>()
{
  return software_training::action::builder::Init_Software_Goal_linear_pos();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_Result_duration
{
public:
  Init_Software_Result_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::software_training::action::Software_Result duration(::software_training::action::Software_Result::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_Result>()
{
  return software_training::action::builder::Init_Software_Result_duration();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_Feedback_theta_pos
{
public:
  explicit Init_Software_Feedback_theta_pos(::software_training::action::Software_Feedback & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_Feedback theta_pos(::software_training::action::Software_Feedback::_theta_pos_type arg)
  {
    msg_.theta_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_Feedback msg_;
};

class Init_Software_Feedback_y_pos
{
public:
  explicit Init_Software_Feedback_y_pos(::software_training::action::Software_Feedback & msg)
  : msg_(msg)
  {}
  Init_Software_Feedback_theta_pos y_pos(::software_training::action::Software_Feedback::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_Software_Feedback_theta_pos(msg_);
  }

private:
  ::software_training::action::Software_Feedback msg_;
};

class Init_Software_Feedback_x_pos
{
public:
  Init_Software_Feedback_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_Feedback_y_pos x_pos(::software_training::action::Software_Feedback::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Software_Feedback_y_pos(msg_);
  }

private:
  ::software_training::action::Software_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_Feedback>()
{
  return software_training::action::builder::Init_Software_Feedback_x_pos();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_SendGoal_Request_goal
{
public:
  explicit Init_Software_SendGoal_Request_goal(::software_training::action::Software_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_SendGoal_Request goal(::software_training::action::Software_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_SendGoal_Request msg_;
};

class Init_Software_SendGoal_Request_goal_id
{
public:
  Init_Software_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_SendGoal_Request_goal goal_id(::software_training::action::Software_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Software_SendGoal_Request_goal(msg_);
  }

private:
  ::software_training::action::Software_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_SendGoal_Request>()
{
  return software_training::action::builder::Init_Software_SendGoal_Request_goal_id();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_SendGoal_Response_stamp
{
public:
  explicit Init_Software_SendGoal_Response_stamp(::software_training::action::Software_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_SendGoal_Response stamp(::software_training::action::Software_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_SendGoal_Response msg_;
};

class Init_Software_SendGoal_Response_accepted
{
public:
  Init_Software_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_SendGoal_Response_stamp accepted(::software_training::action::Software_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Software_SendGoal_Response_stamp(msg_);
  }

private:
  ::software_training::action::Software_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_SendGoal_Response>()
{
  return software_training::action::builder::Init_Software_SendGoal_Response_accepted();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_GetResult_Request_goal_id
{
public:
  Init_Software_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::software_training::action::Software_GetResult_Request goal_id(::software_training::action::Software_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_GetResult_Request>()
{
  return software_training::action::builder::Init_Software_GetResult_Request_goal_id();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_GetResult_Response_result
{
public:
  explicit Init_Software_GetResult_Response_result(::software_training::action::Software_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_GetResult_Response result(::software_training::action::Software_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_GetResult_Response msg_;
};

class Init_Software_GetResult_Response_status
{
public:
  Init_Software_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_GetResult_Response_result status(::software_training::action::Software_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Software_GetResult_Response_result(msg_);
  }

private:
  ::software_training::action::Software_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_GetResult_Response>()
{
  return software_training::action::builder::Init_Software_GetResult_Response_status();
}

}  // namespace software_training


namespace software_training
{

namespace action
{

namespace builder
{

class Init_Software_FeedbackMessage_feedback
{
public:
  explicit Init_Software_FeedbackMessage_feedback(::software_training::action::Software_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::software_training::action::Software_FeedbackMessage feedback(::software_training::action::Software_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::software_training::action::Software_FeedbackMessage msg_;
};

class Init_Software_FeedbackMessage_goal_id
{
public:
  Init_Software_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Software_FeedbackMessage_feedback goal_id(::software_training::action::Software_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Software_FeedbackMessage_feedback(msg_);
  }

private:
  ::software_training::action::Software_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::software_training::action::Software_FeedbackMessage>()
{
  return software_training::action::builder::Init_Software_FeedbackMessage_goal_id();
}

}  // namespace software_training

#endif  // SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__BUILDER_HPP_
