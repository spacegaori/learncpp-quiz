#include <iostream>

int main()
{
    const int x{ 5 };
    const int* ptr { &x }; // ptr points to const int x

    std::cout << ptr << ": " << *ptr << '\n';


    const int y{ 6 };
    ptr = &y; // okay: ptr now points at const int y

    std::cout << ptr << ": " << *ptr << '\n';

    return 0;
}