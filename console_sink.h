#include "sink.h"
#include <chrono>
#include <iomanip>
#include <ctime>
#include <iostream>

class ConsoleSink : public Sink{
    public:
        void log(const std::string& message) override{
            auto now = std::chrono::system_clock::now();
            std::time_t now_time = std::chrono::system_clock::to_time_t(now);

            std::tm* tm_ptr = std::localtime(&now_time);
            std::cout << "["
                              << std::put_time(tm_ptr, "%Y-%m-%d %H:%M:%S")
                              << "] " << message << std::endl;
        }
};
