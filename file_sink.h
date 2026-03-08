#include "sink.h"
#include <fstream>
#include <string>
#include <iostream>

class FileSink : public Sink {
private:
    std::ofstream ofs;

public:
    FileSink(const std::string& filename) {
        ofs.open(filename, std::ios::app);

        if(!ofs.is_open()){
                std::cerr << "Failed to open log file\n";
            }
    }

    void log(const std::string& message) override {
        ofs << message << std::endl;
    }
};
