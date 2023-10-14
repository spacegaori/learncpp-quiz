#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double d{};
    std::cin >> d;
    return d;
}

char getOp()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char c{};
    std::cin >> c;
    return c;
}

void printResult(double d1, double d2, char op)
{
    if (op == '+')
        std::cout << d1 << " + " << d2 << " is " << (d1 + d2) << '\n';
    else if (op == '-')
        std::cout << d1 << " - " << d2 << " is " << (d1 - d2) << '\n';
    else if (op == '*')
        std::cout << d1 << " * " << d2 << " is " << (d1 * d2) << '\n';
    else if (op == '/')
        std::cout << d1 << " / " << d2 << " is " << (d1 * d2) << '\n';
}


int main()
{
    double d1 { getDouble() };
    double d2 { getDouble() };
    
    char op { getOp() };

    printResult(d1, d2, op);

    return 0;
}