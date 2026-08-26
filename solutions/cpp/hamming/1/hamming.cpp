#include "hamming.h"
#include <stdexcept>

namespace hamming {

// TODO: add your solution here

    int compute(std::string dna_1, std::string dna_2)
    {
        int diff = 0;

        if (dna_1.size() != dna_2.size())
        {
            throw std::domain_error("Error");
        }

        for (unsigned i = 0; i < dna_1.size(); i++)
            {
                if (dna_1[i] != dna_2[i])
                {
                    ++diff;
                }
            }

        return diff;
    }
}  // namespace hamming
