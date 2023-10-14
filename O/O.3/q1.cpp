#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // a
    myArticleFlags |= option_viewed;

    // b
    (myArticleFlags & option_deleted) ? std::cout << "Article was deleted" : std::cout << "Article was not deleted";

    // c
    myArticleFlags &= ~option_favorited;

    // d
    // due to DeMorgan's Law

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
    return 0;
}
