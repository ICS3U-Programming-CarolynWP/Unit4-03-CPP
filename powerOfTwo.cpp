// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/03
// Gets the user input for a whole positive
// Number. Uses a FOR loop to calculate the
// Number to the power of 2. Displays this back to
// User.

#include <iostream>
#include <string>

int main() {
    // Variables
    std::string userString;
    int userInteger;
    float userFloat;
    // Counter
    int counter;

    // power
    int power;

    // Title
    std::cout << "Power of 2\n";

    // The user input
    std::cout << "Please enter an integer: ";
    std::cin >> userString;

    // Try Catch statement to make sure the answer is an integer
    try {
        userInteger = std::stoi(userString);
        float userFloat = stof(userString);

        // IF statement to make sure the user input isn't a decimal
        if (userFloat != static_cast<int>(userFloat) || userFloat < 0) {
            std::cout << "Please enter a whole number!\n";
        } else {
           if (userInteger >= 0) {
               for (counter = 0; userInteger >= counter; counter++) {
                   power = counter * counter;
                   std::cout << counter << "^2 = " << power << "\n";
               }
           } else {
               std::cout << "Please enter a positive integer!";
           }
        // if the user does not enter an integer
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter an integer!\n";
    }
}
