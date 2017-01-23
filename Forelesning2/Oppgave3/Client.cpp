#include <iostream>
#include <stdio_ext.h>
#include "../Oppgave2/Die.hpp"

// Adds to values and returns the sum
int sum(const int &valueOne, const int &valueTwo);

int main(){
    int playerBank = 0;
    int playerBet = 0;
    bool playing = true;
    std::string input;

    Die die;
    
    std::cout << "Hvor mye vil du spille med? ";
    std::cin >> playerBank;

    while(playerBank > 0 && playing){
        std::cout << "Hvor mye satser du? ";
        std::cin >> playerBet;

        int die1 = 0, die2 = 0;
        die.roll_die(&die1, &die2);
        std::cout << "Terning 1 viser " << die1 << ", terning 2 viser " << die2 << std::endl;

        if((sum(die1, die2) == 7) || sum(die1, die2) == 11){
            playerBank += (playerBet * 2);
            std::cout << "Du vant, du har nå " << playerBank << " kroner." << std::endl;
        } else {
            playerBank -= playerBet;
            std::cout << "Du tapte, du har nå " << playerBank << " kroner." << std::endl;
        }
        
        bool validInput = false;
        while(playerBank > 0 && !validInput){
            // Clear the input buffer to avoid unexpected behaviour
            __fpurge(stdin);
            std::cout << "Vil du spille mer? (j, n) ";
            getline(std::cin, input);
            if(input.compare("n") == 0){
                playing = false;
                validInput = true;
            } else if(input.compare("j") == 0){
                playing = true;
                validInput = true;
            } else {
                std::cout << "Ugjyldig svar, bruk j eller n" << std::endl;
                validInput = false;
            }
        }
    }

    if(playerBank > 0){
        std::cout << "Du avsluttet spillet med " << playerBank << " kroner." << std::endl;
    } else {
        std::cout << "Game over!" << std::endl;
    }
}

int sum(const int &valueOne, const int &valueTwo){
    return valueOne + valueTwo;
}
