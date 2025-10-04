#include <iostream>
using namespace std;

int main() {
    int userChoice, computerChoice;

    // Show options
    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // Simulate computer choice (fixed for now for simplicity)
    computerChoice = 2; // 1 = Rock, 2 = Paper, 3 = Scissors

    // Show choices
    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;

    // Decide winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "You lose!\n";
    }

    return 0;
}

