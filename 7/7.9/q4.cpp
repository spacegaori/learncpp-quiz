#include <iostream>

void fizzbuzz(int value)
{
    bool fizz{};
    bool buzz{};
    bool pop{};
    for(int count{ 1 }; count <= value; count++)
    {
        fizz = (count % 3 == 0);
        buzz = (count % 5 == 0);
        pop = (count % 7 == 0);

        if (fizz && buzz && pop)
            std::cout << "fizzbuzzpop\n";
        else if (fizz && buzz)
            std::cout << "fizzbuzz\n";
        else if (fizz && pop)
            std::cout << "fizzpop\n";
        else if (buzz && pop)
            std::cout << "buzzpop\n";
        else if (fizz)
            std::cout << "fizz\n";
        else if (buzz)
            std::cout << "buzz\n";
        else if (pop)
            std::cout << "pop\n";
        else
            std::cout << count << '\n';
    }
}

int main()
{
    fizzbuzz(150);

    return 0;
}