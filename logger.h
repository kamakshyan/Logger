#pragma once
#include <vector>
#include <memory>
#include <string>
#include "sink.h"

class Logger {
private:
    std::vector<std::shared_ptr<Sink>> sinks;

public:
    void addSink(std::shared_ptr<Sink> sink);
    void log(const std::string& message);
    void info(const std::string& message);
    void warn(const std::string& message);
    void error(const std::string& message);
};
