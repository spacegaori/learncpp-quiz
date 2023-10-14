#include <iostream>
#include <string>
#include <algorithm>

int getNameCount()
{

    std::cout << "How many names would you like to enter? ";
    std::size_t length{};
    std::cin >> length;

    return length;
}

void getNames(std::string* names, std::size_t length)
{
    for (std::size_t i{ 0 }; i < length; ++i)
    {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws, names[i]);
    }
}

void printNames(std::string* names, std::size_t length)
{
    std::cout << "\nHere is your sorted list:\n";

    for (std::size_t i{ 0 }; i < length; ++i)
    {
        std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
    }
}

int main()
{
    std::size_t length{ static_cast<size_t>(getNameCount()) };

    auto* names{ new std::string[length]{} };

    getNames(names, length);

    std::sort(names, names + length);

    printNames(names, length);

    delete[] names;

    return 0;
}