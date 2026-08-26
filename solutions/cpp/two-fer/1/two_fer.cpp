#include "two_fer.h"
#include <string>
#include <iostream>

namespace two_fer {

// TODO: add your solution here
    std::string two_fer(const std::string& name)
    {
        if (name != "")
        {
            return "One for " + name + ", one for me.";
        }

        return "One for you, one for me.";
    }
}  // namespace two_fer
