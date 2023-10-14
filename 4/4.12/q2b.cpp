#include <iostream>

int charToInt(char c)
{
    int i = c;

    return i;
}

int main()
{
    std::cout << "Enter a single character: ";
    char c{};
    std::cin >> c;
    std::cout << "You entered '" << c << "', which has ASCII code " << charToInt(c) << ".\n";

    return 0;
}
