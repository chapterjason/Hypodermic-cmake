#pragma once

#include "IRegistration.hpp"
#include "IRegistrationActivator.hpp"
#include "Log.hpp"
#include "TypeInfo.hpp"

namespace Hypodermic {

    template<class T>
    class ProvidedInstanceRegistrationActivator : public IRegistrationActivator {
        public:
            ProvidedInstanceRegistrationActivator(const IRegistration &registration, const std::shared_ptr<T> &instance)
                    : m_registration(registration), m_instance(instance) {
            }

            std::shared_ptr<void> activate(IResolutionContext &) override {
                HYPODERMIC_LOG_INFO(
                        "Activating provided instance of type " << m_registration.instanceType().fullyQualifiedName());

                return m_instance;
            }

            void raiseActivated(ComponentContext &, const std::shared_ptr<void> &) override {
            }

        private:
            const IRegistration &m_registration;

            std::shared_ptr<T> m_instance;
    };

} // namespace src