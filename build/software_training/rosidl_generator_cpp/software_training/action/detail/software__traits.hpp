// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from software_training:action/Software.idl
// generated code does not contain a copyright notice

#ifndef SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__TRAITS_HPP_
#define SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__TRAITS_HPP_

#include "software_training/action/detail/software__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'linear_pos'
// Member 'angular_pos'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_Goal>()
{
  return "software_training::action::Software_Goal";
}

template<>
inline const char * name<software_training::action::Software_Goal>()
{
  return "software_training/action/Software_Goal";
}

template<>
struct has_fixed_size<software_training::action::Software_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<software_training::action::Software_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_Result>()
{
  return "software_training::action::Software_Result";
}

template<>
inline const char * name<software_training::action::Software_Result>()
{
  return "software_training/action/Software_Result";
}

template<>
struct has_fixed_size<software_training::action::Software_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<software_training::action::Software_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<software_training::action::Software_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_Feedback>()
{
  return "software_training::action::Software_Feedback";
}

template<>
inline const char * name<software_training::action::Software_Feedback>()
{
  return "software_training/action/Software_Feedback";
}

template<>
struct has_fixed_size<software_training::action::Software_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<software_training::action::Software_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<software_training::action::Software_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "software_training/action/detail/software__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_SendGoal_Request>()
{
  return "software_training::action::Software_SendGoal_Request";
}

template<>
inline const char * name<software_training::action::Software_SendGoal_Request>()
{
  return "software_training/action/Software_SendGoal_Request";
}

template<>
struct has_fixed_size<software_training::action::Software_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<software_training::action::Software_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<software_training::action::Software_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<software_training::action::Software_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_SendGoal_Response>()
{
  return "software_training::action::Software_SendGoal_Response";
}

template<>
inline const char * name<software_training::action::Software_SendGoal_Response>()
{
  return "software_training/action/Software_SendGoal_Response";
}

template<>
struct has_fixed_size<software_training::action::Software_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<software_training::action::Software_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_SendGoal>()
{
  return "software_training::action::Software_SendGoal";
}

template<>
inline const char * name<software_training::action::Software_SendGoal>()
{
  return "software_training/action/Software_SendGoal";
}

template<>
struct has_fixed_size<software_training::action::Software_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<software_training::action::Software_SendGoal_Request>::value &&
    has_fixed_size<software_training::action::Software_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<software_training::action::Software_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<software_training::action::Software_SendGoal_Request>::value &&
    has_bounded_size<software_training::action::Software_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<software_training::action::Software_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<software_training::action::Software_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<software_training::action::Software_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_GetResult_Request>()
{
  return "software_training::action::Software_GetResult_Request";
}

template<>
inline const char * name<software_training::action::Software_GetResult_Request>()
{
  return "software_training/action/Software_GetResult_Request";
}

template<>
struct has_fixed_size<software_training::action::Software_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<software_training::action::Software_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "software_training/action/detail/software__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_GetResult_Response>()
{
  return "software_training::action::Software_GetResult_Response";
}

template<>
inline const char * name<software_training::action::Software_GetResult_Response>()
{
  return "software_training/action/Software_GetResult_Response";
}

template<>
struct has_fixed_size<software_training::action::Software_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<software_training::action::Software_Result>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<software_training::action::Software_Result>::value> {};

template<>
struct is_message<software_training::action::Software_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_GetResult>()
{
  return "software_training::action::Software_GetResult";
}

template<>
inline const char * name<software_training::action::Software_GetResult>()
{
  return "software_training/action/Software_GetResult";
}

template<>
struct has_fixed_size<software_training::action::Software_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<software_training::action::Software_GetResult_Request>::value &&
    has_fixed_size<software_training::action::Software_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<software_training::action::Software_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<software_training::action::Software_GetResult_Request>::value &&
    has_bounded_size<software_training::action::Software_GetResult_Response>::value
  >
{
};

template<>
struct is_service<software_training::action::Software_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<software_training::action::Software_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<software_training::action::Software_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "software_training/action/detail/software__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<software_training::action::Software_FeedbackMessage>()
{
  return "software_training::action::Software_FeedbackMessage";
}

template<>
inline const char * name<software_training::action::Software_FeedbackMessage>()
{
  return "software_training/action/Software_FeedbackMessage";
}

template<>
struct has_fixed_size<software_training::action::Software_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<software_training::action::Software_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<software_training::action::Software_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<software_training::action::Software_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<software_training::action::Software_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<software_training::action::Software>
  : std::true_type
{
};

template<>
struct is_action_goal<software_training::action::Software_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<software_training::action::Software_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<software_training::action::Software_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SOFTWARE_TRAINING__ACTION__DETAIL__SOFTWARE__TRAITS_HPP_
