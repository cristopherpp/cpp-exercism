#include <string>

namespace log_line {
    std::string message(std::string line) {
        int index = line.find(":") + 2;
        return line.substr(index);
    }

    std::string log_level(std::string line) {
        int leftBracket = line.find("[") + 1;
        int rightBracket = line.find("]") - 1;
        return line.substr(leftBracket, rightBracket);
    }

    std::string reformat(std::string line) {
        std::string logLevel = log_level(line);
        std::string msg = message(line);
        return msg + " " + "(" + logLevel + ")";
    }
}
