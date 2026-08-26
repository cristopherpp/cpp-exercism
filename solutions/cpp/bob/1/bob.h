#pragma once

#include <string>
#include <iostream>

namespace bob {

// TODO: add your solution here
    std::string hey(std::string speech);
    bool isQuestion(const std::string& speech);
    bool isAYell(std::string& speech);
    bool noSpeech(std::string& speech);
}  // namespace bob
