#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char c{};
    std::cin >> c;

    int i { c };
    std::cout << "You entered '" << c << "', which has ASCII code " << i << ".\n";

    return 0;
}
