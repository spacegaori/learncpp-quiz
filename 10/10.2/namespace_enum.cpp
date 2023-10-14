#include <iostream>

namespace Color
{
    enum Color
    {
        red,
        green,
        blue,
    };
}

namespace Feeling
{
    enum Feeling
    {
        happy,
        tired,
        blue,
    };
}

int main()
{
    Color::Color brocolli{ Color::green };
    Color::Color paint{ Color::blue };
    Feeling::Feeling me{ Feeling::blue };
    Feeling::Feeling her{ Feeling::tired };

    std::cout << brocolli << '\n' << paint << '\n' << me << '\n' << her << '\n';
}