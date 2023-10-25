/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <cstdlib>

// Guess the Number
int main() {
    int random = rand() % 100;
    bool check = true;
    int guess;

    while(check) {
        std::cout << "Type guessed number: ";
        std::cin >> guess;
        if (guess != random) {
            if (guess < random) {
                std::cout << "Too low" << std::endl;
            } else {
                std::cout << "Too high" << std::endl;
            }
        } else {
            check = false;
            std::cout << "Success! You guessed right!";
            break;
        }
    }

    return 0;
}
