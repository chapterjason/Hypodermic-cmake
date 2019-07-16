#pragma once

#include "ActivationHandlers.hpp"
#include "DependencyFactories.hpp"
#include "InstanceFactory.hpp"
#include "IRuntimeRegistrationBuilder.hpp"
#include "Registration.hpp"
#include "TypeAliases.hpp"

namespace Hypodermic {

    class RuntimeRegistrationBuilder : public IRuntimeRegistrationBuilder {
        public:
            std::shared_ptr<IRegistration>
            build(const TypeInfo &instanceType, const InstanceFactory &instanceFactory) override {
                return std::make_shared<Registration>
                        (
                                instanceType,
                                TypeAliases(),
                                instanceFactory,
                                DependencyFactories(),
                                ActivationHandlers(),
                                false /* not a fallback registration */
                        );
            }
    };

} // namespace src