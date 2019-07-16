#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(InstanceAlreadyActivatingException);

} // namespace src


#define HYPODERMIC_THROW_INSTANCE_ALREADY_ACTIVATING_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::InstanceAlreadyActivatingException, message)
