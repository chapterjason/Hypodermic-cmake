#pragma once

#include "ILoggerSink.hpp"

namespace Hypodermic {

    class NoopLoggerSink : public ILoggerSink {
        public:
            void append(LogLevels::LogLevel, const std::string &) override {
            }
    };

} // namespace src