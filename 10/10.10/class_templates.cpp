#include <iostream>

template <typename T>
struct Pair
{
    T first{};
    T second {};
};

int main()
{
    Pair<int> p1{ 5, 6 };
    std::cout << p1.first << ' ' << p1.second << '\n';

    Pair<double> p2{ 1.2, 3.4 };
    std::cout << p2.first << ' ' << p2.second << '\n';

    Pair<double> p3{ 7.8, 9.0 };
    std::cout << p3.first << ' ' << p3.second << '\n';

    return 0;
}