#pragma once

#include <memory>

#include "InstanceFactory.hpp"
#include "IRegistration.hpp"
#include "TypeInfo.hpp"

namespace Hypodermic {

    class IRuntimeRegistrationBuilder {
        public:
            virtual ~IRuntimeRegistrationBuilder() = default;

            virtual std::shared_ptr<IRegistration>
            build(const TypeInfo &instanceType, const InstanceFactory &instanceFactory) = 0;
    };

} // namespace src