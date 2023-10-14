#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int number{};
    std::cin >> number;
    std::cout << number << " doubled is " << doubleNumber(number) << '\n';

    return 0;
}
