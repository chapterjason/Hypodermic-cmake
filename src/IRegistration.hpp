#pragma once

#include "DependencyFactory.hpp"
#include "InstanceLifetime.hpp"
#include "TypeAliases.hpp"

namespace Hypodermic {

    class Container;

    class IRegistrationActivator;

    struct TypeInfo;

    class IRegistration {
        public:
            virtual ~IRegistration() = default;

            virtual const TypeInfo &instanceType() const = 0;

            virtual const TypeAliases &typeAliases() const = 0;

            virtual DependencyFactory getDependencyFactory(const TypeInfo &dependencyType) const = 0;

            virtual IRegistrationActivator &activator() const = 0;

            virtual InstanceLifetimes::InstanceLifetime instanceLifetime() const = 0;

            virtual bool isFallback() const = 0;
    };

} // namespace src