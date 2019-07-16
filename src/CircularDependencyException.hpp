#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(CircularDependencyException);

} // namespace src


#define HYPODERMIC_THROW_CIRCULAR_DEPENDENCY_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::CircularDependencyException, message)
