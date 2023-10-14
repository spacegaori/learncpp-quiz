#include <iostream>

int main()
{
    char curr { 'a' };

    while(curr <= 'z')
    {
        std::cout << curr << " " << static_cast<int>(curr) << '\n';
        ++curr;
    }

    return 0;
}