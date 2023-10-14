#include <iostream>

int sumTo(int value)
{
    int total{ 0 };
    for (int count{ 1 }; count <= value; ++count)
        total += count;

    return total;
}

int main()
{
    std::cout << sumTo(5) << '\n';

    return 0;
}