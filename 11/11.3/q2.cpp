#include <iostream>
#include <iterator>

int main()
{
    int number{};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;

        if (std::cin.fail())
            std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }   while (number < 1 || number > 9);

    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    for(int index{ 0 }; index < static_cast<int>(std::size(array)); ++index)
    {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';

    for (int index{ 0 }; index < static_cast<int>(std::size(array)); ++index)
    {
        if (array[index] == number)
        {
            std::cout << "The number " << number << " has index " << index << '\n';
            break;
        }
    }
    return 0;
}