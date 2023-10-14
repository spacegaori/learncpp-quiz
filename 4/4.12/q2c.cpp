#include <iostream>

int getInt(int a)
{
    return a;
}

int main()
{
    std::cout << "Enter a single character: ";
    char c{};
    std::cin >> c;
    
    std::cout << "You entered '" << c << "', which has ASCII code " << getInt(c) << ".\n";

    return 0;
}
