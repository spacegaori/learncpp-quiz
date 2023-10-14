#include "Fraction.h"
#include <iostream>

int main()
{
    
    std::cout << "Input the denominator: ";
    int d{};
    std::cin >> d;

    std::cout << "Input the numerator: ";
    int n{};
    std::cin >> n;

    Fraction f{ n, d };

    std::cout << f.numerator << '/' << f.denominator << '\n';

    return 0;
}