#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(DependencyActivationException);

} // namespace src


#define HYPODERMIC_THROW_DEPENDENCY_ACTIVATION_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::DependencyActivationException, message)
