#include "rotational_cipher.h"

#include <string>

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(std::string text, int shiftKey)
    {
        auto RotateChar = [shiftKey](char c) -> char {
            if (!std::isalpha(c)) return c;
            char base = std::islower(c) ? 'a' : 'A';
            return static_cast<char>(base + (c - base + shiftKey) % 26);
        };

        std::string result;
        result.reserve(text.size());

        for (char c : text) {
            result += RotateChar(c);
        }

        return result;
    }
}  // namespace rotational_cipher
