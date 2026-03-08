#include "logger.h"
#include "console_sink.h"
#include <memory>

int main(){
    Logger logger;

    logger.addSink(std::make_shared<ConsoleSink>());

    logger.info("Info Message");
    logger.warn("Warning Message");
    logger.error("Error Message");

    logger.log("Logger Logged");

    return 0;
}
