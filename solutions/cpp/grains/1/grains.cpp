#include <iostream>
#include "grains.h"

using namespace std;

namespace grains {
// TODO: add your solution here
    std::uint64_t square(int tiles) {
        std::uint64_t result = ((uint64_t)1<<(tiles-1));
        return result;
    }
    std::uint64_t total() {
        std::uint64_t result = 1;
        for(int i = 2; i <= 64; i++) {
            result += square(i);
        }
        return result;
    }
}  // namespace grains
