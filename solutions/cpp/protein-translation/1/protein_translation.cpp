#include "protein_translation.h"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

namespace protein_translation {

// TODO: add your solution here
    std::vector<std::string> proteins(const std::string& rna) {
        std::unordered_map<std::string, std::string> codon_table = {
            {"AUG", "Methionine"}, {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
            {"UUA", "Leucine"}, {"UUG", "Leucine"}, {"UCU", "Serine"},
            {"UCC", "Serine"}, {"UCA", "Serine"}, {"UCG", "Serine"},
            {"UAU", "Tyrosine"}, {"UAC", "Tyrosine"}, {"UGU", "Cysteine"},
            {"UGC", "Cysteine"}, {"UGG", "Tryptophan"}, {"UAA", "STOP"},
            {"UAG", "STOP"}, {"UGA", "STOP"}
        };

        std::vector<std::string> protein_sequence;

        for (size_t i = 0; i + 2 < rna.length(); i += 3) {
            std::string codon = rna.substr(i, 3);
            if (codon_table.count(codon)) {
                std::string protein = codon_table[codon];
                if (protein == "STOP") {
                    break;
                }
                protein_sequence.push_back(protein);
            }
        }

        return protein_sequence;
    }
}  // namespace protein_translation
