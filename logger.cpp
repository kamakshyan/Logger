#include<vector>
#include<memory>
#include "logger.h"


void Logger::addSink(std::shared_ptr<Sink> sink){
    sinks.push_back(sink);
}

void Logger::log(const std::string& message){
    for(auto& sink : sinks){
        sink->log(message);
    };
};

void Logger::info(const std::string& message){
    log("[INFO] " + message);
}

void Logger::warn(const std::string& message){
    log("[WARN] " + message);
}

void Logger::error(const std::string& message){
    log("[ERROR] " + message);
}
