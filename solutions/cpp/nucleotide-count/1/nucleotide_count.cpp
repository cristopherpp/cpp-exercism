#include "nucleotide_count.h"

namespace nucleotide_count {

// TODO: add your solution here
    counts count(const std::string &dna)
    {
        counts total;
        total['A'] = total['C'] = total['G'] = total['T'] = 0;

        for (char c: dna) {
            if (c != 'A' && c != 'C' && c != 'G' && c != 'T')
                throw std::invalid_argument("Bad DNA base!");

            total[c] += 1;
        }

        return total;
    }
}  // namespace nucleotide_count
