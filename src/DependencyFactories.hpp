#pragma once

#include <unordered_map>

#include "DependencyFactory.hpp"
#include "TypeInfo.hpp"

namespace Hypodermic {

    typedef std::unordered_map<TypeInfo, DependencyFactory> DependencyFactories;

} // namespace src