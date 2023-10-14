#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double h {};
    std::cin >> h;
    return h;
}

double calcHeight(int s, double h)
{
    constexpr double g { 9.8 };

    const double curr { h - ((g * (s * s)) / 2.0) };

    return curr;
}

void printHeight(double s, double h)
{
    if (h > 0.0)
        std::cout << "At " << s << " seconds, the ball is at height: " << h << " meters\n";
    else
        std::cout << "At " << s << " seconds, the ball is on the ground.\n";
}

void calcAndPrintHeight(int s, double h)
{
    const double height { calcHeight(s, h) };
    printHeight(s, height);
}

int main()
{
    const double height { getHeight() };

    calcAndPrintHeight(0, height);
    calcAndPrintHeight(1, height);
    calcAndPrintHeight(2, height);
    calcAndPrintHeight(3, height);
    calcAndPrintHeight(4, height);
    calcAndPrintHeight(5, height);

    return 0;
}