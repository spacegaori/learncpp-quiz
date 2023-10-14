#include <ios>
#include <iostream>

void printIntAsBin(int n)
{
    constexpr int pow7 { 128 };
    constexpr int pow6 { 64 };
    constexpr int pow5 { 32 };
    constexpr int pow4 { 16 };
    constexpr int pow3 { 8 };
    constexpr int pow2 { 4 };
    constexpr int pow1 { 2 };
    constexpr int pow0 { 1 };

    if (n >= pow7)
    {
        std::cout << "1";
        n -= pow7;
    }
    else
        std::cout << "0";
    if (n >= pow6)
    {
        std::cout << "1";
        n -= pow6;
    }
    else
        std::cout << "0";
    if (n >= pow5)
    {
        std::cout << "1";
        n -= pow5;
    }
    else
        std::cout << "0";
    if (n >= pow4)
    {
        std::cout << "1";
        n -= pow4;
    }
    else
        std::cout << "0";
    std::cout << ' ';
    if (n >= pow3)
    {
        std::cout << "1";
        n -= pow3;
    }
    else
        std::cout << "0";
    if (n >= pow2)
    {
        std::cout << "1";
        n -= pow2;
    }
    else
        std::cout << "0";
    if (n >= pow1)
    {
        std::cout << "1";
        n -= pow1;
    }
    else
        std::cout << "0";
    if (n >= pow0)
    {
        std::cout << "1";
        n -= pow0;
    }
    else
        std::cout << "0";
    std::cout << '\n';
}

int main()
{
    std::cout << "Input a number between 0 and 255: ";
    int n{};
    std::cin >> n;

    printIntAsBin(n);

    return 0;
}