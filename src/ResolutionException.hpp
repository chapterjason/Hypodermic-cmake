#pragma once

#include "ExceptionBase.hpp"

namespace Hypodermic {

    HYPODERMIC_DECLARE_EXCEPTION(ResolutionException);

} // namespace src


#define HYPODERMIC_THROW_RESOLUTION_EXCEPTION(message) HYPODERMIC_THROW(::Hypodermic::ResolutionException, message)
