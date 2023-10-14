#include <iostream>

int main()
{
    unsigned int u { 5 };
    float f { 1.5 };

    constexpr int n{ 5 };
    double d { n };
    short s { 5 } ;

    std::cout << "u: " << u << '\n';
    std::cout << "f: " << f << '\n';
    std::cout << "n: " << n << '\n';
    std::cout << "d: " << d << '\n';
    std::cout << "s: " << s << '\n';

    return 0;
}