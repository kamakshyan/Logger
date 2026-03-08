#pragma once
#include <string>

class Sink{
    public:
        virtual void log(const std::string& message) = 0;
        virtual ~Sink() = default;
};
