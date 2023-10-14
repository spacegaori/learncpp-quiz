#include <iostream>

bool isPrime(int n)
{
    if (n == 2)
        return true;
    else if (n == 3)
        return true;
    else if (n == 5)
        return true;
    else if (n == 7)
        return true;
    
    return false;
}

int main()
{
    std::cout << "Enter a number (0-9): ";
    int input {};
    std::cin >> input;
    if (isPrime(input))
    {
        std::cout << "The digit is prime.\n";
    }
    else
    {
        std::cout << "The digit is not prime.\n";
    }

    return 0;
}