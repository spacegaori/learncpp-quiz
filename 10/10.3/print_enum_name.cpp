#include <iostream>

namespace Color
{
    enum Color
    {
        red,
        green,
        blue,
        black,
        white,
    };
}


void printColor(Color::Color color)
{
    if (color == Color::black) std::cout << "black";
    else if (color == Color::red) std::cout << "red";
    else if (color == Color::blue) std::cout << "blue";
    else std::cout << "???";
    std::cout << '\n';
}

int main()
{
    Color::Color light { Color::white };
    Color::Color shadow { Color::black };
    Color::Color sun { Color::red };

    printColor(light);
    printColor(shadow);
    printColor(sun);

    return 0;
}