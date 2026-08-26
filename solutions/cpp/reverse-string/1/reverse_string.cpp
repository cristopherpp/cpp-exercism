#include "reverse_string.h"
#include <iostream>
#include <algorithm>

namespace reverse_string {
    std::string reverse_string(std::string str)
    {
        reverse(str.begin(), str.end());
        return str;
    }
}  // namespace reverse_string
