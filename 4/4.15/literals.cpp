#include <iostream>

int main()
{
    std::cout << 5 << "\n"; // 5 (no suffix) is type int (by default)
    std::cout << 5L << "\n"; // 5L is type long

    unsigned int x { 5u };
    std::cout << x;

    std::cout << 5.0 << "\n";
    std::cout << 5.0f << "\n";

    float f { 4.1f };
    std::cout << f << "\n";

    double d { 4.1 };
    std::cout << d << "\n";

    return 0;
}