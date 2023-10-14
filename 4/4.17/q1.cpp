#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int nameLength{ static_cast<int>(name.length()) };

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;


    std::cout << "Your age + length of name is: " << age + nameLength << '\n';

    return 0;
}
