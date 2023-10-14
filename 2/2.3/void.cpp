#include <iostream>

int printHi()
{
    std::cout << "Hi" << '\n';

    return 5;
}

int main()
{
    std::cout << printHi() << "\n";

    return 0;
}