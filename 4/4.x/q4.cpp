#include <iostream>

constexpr double g { 9.8 };

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;

    return height;
}

void printHeight(int s, double h)
{
    if (h > 0.0)
        std::cout << "At " << s << " seconds, the ball is at height: " << h << " meters\n";
    else
        std::cout << "At " << s << " seconds, the ball is on the ground.\n";
}

void calcHeight(double height)
{
    int s { 0 };
    double h0 { height };
    printHeight(s, h0);

    s++;
    double h1 { h0 - g * (s * s) / 2};
    printHeight(s, h1);

    s++;
    double h2 { h0 - g * (s * s) / 2};
    printHeight(s, h2);

    s++;
    double h3 { h0 - g * (s * s) / 2};
    printHeight(s, h3);

    s++;
    double h4 { h0 - g * (s * s) / 2};
    printHeight(s, h4);
}

int main()
{
    double h { getHeight() };
    calcHeight(h);

    return 0;
}