#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string s{ "Hello, world" };
    std::string_view sv{ s }; // Initialize a std::string_view from a std::string
    std::cout << sv << '\n';

    printSV(s); // implicitly convert a std::string to std::string_view

    return 0;
}
