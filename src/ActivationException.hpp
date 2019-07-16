#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(ActivationException);

} // namespace src


#define HYPODERMIC_THROW_ACTIVATION_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::ActivationException, message)
