#pragma once

#include <functional>
#include <memory>
#include <unordered_map>

#include "TypeAliasKey.hpp"

namespace Hypodermic {

    typedef std::unordered_map<TypeAliasKey, std::function<std::shared_ptr<void>(
            const std::shared_ptr<void> &)> > TypeAliases;

} // namespace src