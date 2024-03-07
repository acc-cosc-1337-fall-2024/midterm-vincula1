#include <iostream>
#include "question3.h"
#include <iomanip>

int main()
{
    std::string seq1 = "GAGCCTACTAACGGGAT";
    std::string seq2 = "CATCGTAATGACGGCCT";

    double p_distance = get_dna_p_distance(seq1, seq2);

    std::cout << "P-distance: " << std::fixed << std::setprecision(4) << p_distance << std::endl;

    return 0;
}