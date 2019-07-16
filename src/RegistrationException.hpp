#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(RegistrationException);

} // namespace src


#define HYPODERMIC_THROW_REGISTRATION_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::RegistrationException, message)
