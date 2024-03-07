#include <iostream>
#include "question1.h"

int main()
{
    double celsius;
    char continueChoice = 'y';

    while(continueChoice == 'y' || continueChoice == 'Y') {
        std::cout << "Enter temperature (in Celsius): ";
        std::cin  >> celsius;

        std::cout << "Temperature in Fahrenheit: " << get_fahrenheit(celsius) << std::endl;

        std::cout << "Do you want to convert another temperature value? Reply (y/n): ";
        std::cin >> continueChoice;

    }

    return 0;
}