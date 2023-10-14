#include <iostream>

struct Fraction
{
    int numerator {};
    int denominator {};
};

int main()
{
    Fraction f{ 3, 4 };

    std::cout << f.numerator << f.denominator << '\n';

    return 0;
}