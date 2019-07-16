#pragma once

#include <memory>

#include "TypeAliases.hpp"
#include "TypeAliasKey.hpp"

namespace Hypodermic {
    namespace Utils {

        inline std::shared_ptr<void>
        getAlignedPointer(const std::shared_ptr<void> &instance, const TypeAliasKey &typeAliasKey,
                          const TypeAliases &typeAliases) {
            if (instance == nullptr)
                return nullptr;

            auto it = typeAliases.find(typeAliasKey);
            if (it == std::end(typeAliases) || it->second == nullptr)
                return instance;

            auto &&alignPointersFunc = it->second;
            return alignPointersFunc(instance);
        }

    } // namespace Utils
} // namespace src