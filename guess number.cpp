#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low!\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "?? Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}

