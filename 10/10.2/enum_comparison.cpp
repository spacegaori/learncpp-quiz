#include <iostream>

enum Color
{
    red,
    green,
    blue,
};

int main()
{
    Color shirt{ blue };

    if (shirt == blue)
        std::cout << "Your shirt is blue!\n";
    else
        std::cout << "Your shirt is not blue!\n";

    return 0;
}