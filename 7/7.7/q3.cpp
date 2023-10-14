#include <iostream>

int main()
{
    int outer { 5 };

    while(outer)
    {
        int inner { outer };
        while(inner)
        {
            std::cout << inner-- << ' ';
        }
        std::cout << '\n';
        --outer;
    }

    return 0;
}