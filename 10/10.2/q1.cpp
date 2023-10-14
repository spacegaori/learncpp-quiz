#include <iostream>

namespace Monster
{
    enum MonsterType
    {
        orcs,
        goblins,
        trolls,
        ogres,
        skeletons,
    };
}

int main()
{
    Monster::MonsterType ziggs{ Monster::trolls };
    Monster::MonsterType anivia{ Monster::orcs };
    Monster::MonsterType viego{ Monster::skeletons };

    std::cout << ziggs << anivia << viego;

    return 0;
}