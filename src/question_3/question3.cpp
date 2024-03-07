#include "question3.h"
#include <iostream>

double get_dna_p_distance(const std::string& seq1, const std::string& seq2) {
    int diffCount = 0;
    for (size_t i = 0; i < seq1.length(); ++i) {
        if (seq1[i] != seq2[i]) {
            ++diffCount;
        }
    }

    double distance = static_cast<double>(diffCount) / seq1.length();
    return distance;
}

bool test_config()
{
    return true;
}