#include "question4.h"
#include <limits>
#include <iostream>

int main()
{
    int number;
    char continueChoice = 'y';

    while (continueChoice == 'y' || continueChoice == 'Y') {
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> number;

        if (std::cin.fail() || number < 1 || number > 15) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, enter a number between 1 and 15." << std::endl;
            continue;
            
        }

        int fibNumber = get_fib_number(number);
        std::cout << "Fibonacci number with position " << number << " is " << fibNumber << "." << std::endl;

        std::cout << "Do you want to calculate another Fibonacci number? (y/n): ";
        std::cin >> continueChoice;


    }

    return 0;
}