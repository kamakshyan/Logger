#include <iostream>

class Logger{
    public:
        void log(const std::string& message){
            std::cout << message << std::endl;
        };

        void info(const std::string& message){
            log("INFO: " + message);
        };

        void warn(const std::string& message){
            log("WARN: " + message);
        };

        void error(const std::string& message){
            log("ERROR: " + message);
        };
};
int main(){
    Logger logger;
    logger.log("Logger Called!");
    logger.info("Info message");
    logger.warn("Warn message");
    logger.error("Error message");
    return 0;
}
