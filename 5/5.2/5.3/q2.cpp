#include <iostream>

bool isEven(int n)
{
    return (n % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int i{};
    std::cin >> i;
    
    if (isEven(i))
        std::cout << i << " is even\n";
    else
        std::cout << i << " is odd\n";

    return 0;
}