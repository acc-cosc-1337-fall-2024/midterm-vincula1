#include "question2.h"
#include <iostream>

int main()
{
    double sales;
    char continueChoice = 'y';

    while (continueChoice == 'y' || continueChoice == 'Y'){
        std::cout << "Enter sales amount: ";
        std::cin >> sales;

        double commission = get_sales_commission(sales);
        std::cout << "Sales of " << sales << " yields a commission of " << commission << "." << std::endl;

        std::cout << "Do you want to calculate another commission? (y/n): ";
        std::cin >> continueChoice;
    }

    return 0;
}