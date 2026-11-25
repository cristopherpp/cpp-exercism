#include "rna_transcription.h"

#include <unordered_map>

namespace rna_transcription {

// TODO: add your solution here
    char to_rna(char nucleoide) {
        static const std::unordered_map<char, char> complement = {{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};

        return complement.at(nucleoide);
    }

    std::string to_rna(std::string dna) {
        std::string rna;
        for (auto c : dna) {
            rna.push_back(to_rna(c));
        }

        return rna;
    }

}  // namespace rna_transcription
