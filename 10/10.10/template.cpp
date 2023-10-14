#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(5, 6);
    std::cout << '\n';
    std::cout << max(1.2, 3.4);

    return 0;
}