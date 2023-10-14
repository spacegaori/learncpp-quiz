#include <iostream>

void sort2(int& x, int& y)
{
    if (x > y)
    {
        int temp{ x };
        x = y;
        y = temp;
    }
}

int main()
{
    int x { 7 };
    int y { 5 };

    sort2(x, y);
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y);
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
