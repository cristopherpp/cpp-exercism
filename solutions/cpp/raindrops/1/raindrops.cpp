#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int raindrops)
    {
        std::string result{};
        if (raindrops % 3 != 0 && raindrops % 5 != 0 && raindrops % 7 != 0)
            result = std::to_string(raindrops);
        if (raindrops % 3 == 0)
            result += "Pling";
        if (raindrops % 5 == 0)
            result += "Plang";
        if (raindrops % 7 == 0)
            result += "Plong";
        return result; 
    }
}  // namespace raindrops