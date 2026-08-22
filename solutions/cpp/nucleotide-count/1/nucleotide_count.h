#pragma once
#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {
// TODO: add your solution here
    using counts = std::map<char, int>;
    counts count(const std::string &dna);
}  // namespace nucleotide_count
