// Write a function called calculate() that takes two integers and a 
// char representing one of the following mathematical operations: 
// +, -, *, /, or % (modulus). Use a switch statement to perform 
// the appropriate mathematical operation on the integers, and return
//  the result. If an invalid operator is passed into the function, 
// the function should print an error. For the division operator, do 
// an integer division.

// Hint: “operator” is a keyword, variables can’t be named “operator”.

#include <iostream>

int oper(int x, int y, char op)
{
    switch (op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cerr << "invalid operator\n";
            return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    std::cout << oper(x, y, op) << '\n';

    return 0;
}