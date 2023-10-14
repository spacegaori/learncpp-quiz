#include <iostream>

int main()
{
    int outer { 1 };
    while (outer <= 5)                           // 1 2 3 4 5
    {
        int inner { outer };
        int blank { 5 - inner };
        while (blank)                       // 4 3 2 1 0
        {
            std::cout << ' ' << ' ';
            --blank;
        }
        while (inner <= 5)                       // 1 2 3 4 5
        {
            std::cout << inner << ' ';
            ++inner;
        }
        std::cout << '\n';
        ++outer;
    }
    return 0;
}