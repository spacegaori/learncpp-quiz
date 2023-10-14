#include <iostream>

enum Color
{
    red,
    green,
    blue,
};

enum CardinalDirections
{
    north,
    east,
    south,
    west,
};

int main()
{
    Color apple { red };
    Color shirt { green };
    Color cup { blue };

    CardinalDirections home { south };
    CardinalDirections moon { north };

    // Color socks { white };
    // Color hat { 2 };

    std::cout << apple << '\n' << shirt << '\n' << cup << '\n';
    std::cout << home << '\n' << moon << '\n';

    return 0;
}