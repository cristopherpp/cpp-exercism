#include "pangram.h"

#include <string>
#include <iostream>
#include <algorithm>

namespace pangram {

    bool is_pangram(const std::string& sentence)
    {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (char c : alphabet)
        {
            if (sentence.find(c) == std::string::npos &&
                sentence.find(std::toupper(c)) == std::string::npos) return false;
        }
        return true;
    }

}  // namespace pangram
