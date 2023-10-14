#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int leftInt = { };
    std::cin >> leftInt;

    std::cout << "Enter another integer: ";
    int rightInt = { };
    std::cin >> rightInt;

    std::cout << leftInt << " + " << rightInt << " is " << leftInt + rightInt << '\n';
    std::cout << leftInt << " - " << rightInt << " is " << leftInt - rightInt << '\n';

    return 0;
}
