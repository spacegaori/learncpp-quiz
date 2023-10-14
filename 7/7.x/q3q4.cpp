#include <iostream>
#include <random>

int getGuess(int attempt)
{

    while (true)
    {
        std::cout << "Guess #" << attempt << ": ";

        int guess {};
        std::cin >> guess;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (guess < 1 || guess > 100)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return guess;
    }

    
}

bool hilo(int guesses, int target)
{
    for(int attempt { 1 }; attempt <= guesses; ++attempt)
    {
        int guess { getGuess(attempt) };

        if (guess > target)
            std::cout << "Your guess is too high" << '\n';
        else if (guess < target)
            std::cout << "Your guess is too low" << '\n';
        else
            return true;
    }

    return false;
}

bool playAgain()
{
    while (true)
    {
        char cont{};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> cont;

        switch (cont)
        {
            case 'y': return true;
            case 'n': return false;
            default:
			    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}


int main()
{   
    std::random_device rd;
    std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{ ss };
    std::uniform_int_distribution number{ 1, 100 };

	constexpr int guesses{ 7 };

    do
    {
        int target { number(mt) };

        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << '\n';

        bool won{ hilo(guesses, target) };
        if (won)
            std::cout << "Correct! You win!" << '\n';
        else
            std::cout << "Sorry, you lose. The correct number was " << target << '.' << '\n';

    } while (playAgain());
    
    std::cout << "Thank you for playing." << '\n';
    return 0;
}