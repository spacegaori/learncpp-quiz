#include <algorithm>
#include <array>
#include <ctime>
#include <iostream>
#include <random>

enum class CardSuit
{
    club,
    diamond,
    heart,
    spade,

    max_suits
};

enum class CardRank
{
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_jack,
    rank_queen,
    rank_king,
    rank_ace,

    max_ranks
};

struct Card
{
    CardRank rank{};
    CardSuit suit{};
};

void printCard(const Card &card)
{
    switch(card.rank)
    {
    case CardRank::rank_2:      std::cout << '2';    break;
    case CardRank::rank_3:      std::cout << '3';    break;
    case CardRank::rank_4:      std::cout << '4';    break;
    case CardRank::rank_5:      std::cout << '5';    break;
    case CardRank::rank_6:      std::cout << '6';    break;
    case CardRank::rank_7:      std::cout << '7';    break;
    case CardRank::rank_8:      std::cout << '8';    break;
    case CardRank::rank_9:      std::cout << '9';    break;
    case CardRank::rank_10:     std::cout << 'T';   break;
    case CardRank::rank_jack:   std::cout << 'J';    break;
    case CardRank::rank_queen:  std::cout << 'Q';    break;
    case CardRank::rank_king:   std::cout << 'K';    break;
    case CardRank::rank_ace:    std::cout << 'A';    break;
    default:
        std::cout << '?';
        break;
    }
    switch(card.suit)
    {
    case CardSuit::club:        std::cout <<'C';    break;
    case CardSuit::diamond:     std::cout <<'D';    break;
    case CardSuit::heart:       std::cout <<'H';    break;
    case CardSuit::spade:       std::cout <<'S';    break;
    default:
        std::cout << '?';
        break;
    }
}

using Deck = std::array<Card, 52>;
using Index = Deck::size_type;

Deck createDeck()
{
    Deck deck{};
    Index index{ 0 };
    for(int suit{ 0 }; suit < static_cast<int>(CardSuit::max_suits); ++suit)
    {
        for(int rank{ 0 }; rank < static_cast<int>(CardRank::max_ranks); ++rank)
        {
            deck[index].suit = static_cast<CardSuit>(suit);
            deck[index].rank = static_cast<CardRank>(rank);
            ++index;
        }
    }

    return deck;
}

void printDeck(const Deck& deck)
{
    for (const auto& card : deck)
    {
        printCard(card);
        std::cout << ' ';
    }
    std::cout << '\n';
}

void shuffleDeck(Deck& deck)
{
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(const Card& card)
{
    switch(card.rank)
    {
    case CardRank::rank_2:      return 2;
    case CardRank::rank_3:      return 3;
    case CardRank::rank_4:      return 4;
    case CardRank::rank_5:      return 5;
    case CardRank::rank_6:      return 6;
    case CardRank::rank_7:      return 7;
    case CardRank::rank_8:      return 8;
    case CardRank::rank_9:      return 9;
    case CardRank::rank_10:
    case CardRank::rank_jack:
    case CardRank::rank_queen:
    case CardRank::rank_king:   return 10;
    case CardRank::rank_ace:    return 11;
    default:
        assert(false && "should never happen");
        return 0;
    }
}

int main()
{
    auto deck{ createDeck() };
    shuffleDeck(deck);
    printDeck(deck);

    return 0;
}