#include "bob.h"

#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

namespace bob {
// TODO: add your solution here
    std::string hey(std::string speech) {
        if (isQuestion(speech) && isAYell(speech)) return "Calm down, I know what I'm doing!";
        if (isQuestion(speech)) return "Sure.";
        if (isAYell(speech)) return "Whoa, chill out!";
        if (noSpeech(speech)) return "Fine. Be that way!";
        return "Whatever.";
    }
bool isQuestion(const std::string& speech) {
    auto it = speech.find_last_not_of(" \t\n\r");
    return (it != std::string::npos && speech[it] == '?');
}

bool isAYell(std::string& speech) {
    bool hasLetters = false;
    for (char ch : speech) {
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            hasLetters = true;
            if (!std::isupper(static_cast<unsigned char>(ch))) {
                return false;
            }
        }
    }
    return hasLetters;
}

bool noSpeech(std::string& speech) {
    return std::all_of(speech.begin(), speech.end(), [](unsigned char c) {
        return std::isspace(c);
    });
}
}  // namespace bob



