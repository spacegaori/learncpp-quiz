#include <iostream>
#include <string_view>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
};

struct Monster
{
    MonsterType type{};
    std::string_view name{};
    int health{};
};

constexpr std::string_view getMonsterTypeString(MonsterType type)
{
    using enum MonsterType;

    switch(type)
    {
        case ogre:
            return "Ogre";
        case dragon:
            return "Dragon";
        case orc:
            return "Orc";
        case giant_spider:
            return "Giant Spider";
        case slime:
            return "Slime";
        default:
            return "Unknown";
    }
}

void printMonster(Monster& monster)
{
    std::cout << "This " << getMonsterTypeString(monster.type) << 
        " is named " << monster.name << " and has " << 
        monster.health << " health.\n";
}

int main()
{
    Monster torg{ MonsterType::ogre, "Torg", 145 };
    Monster blurp{ MonsterType::slime, "Blurp", 23 };

    printMonster(torg);
    printMonster(blurp);

    return 0;
}