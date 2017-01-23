#include <iostream>
#include "../Oppgave2/Die.hpp"

int main(){
    int playerBank = 0;
    int playerBet = 0;

    Die die;

    while(playerBank > 0){
        std::cout << "Hvor mye vil du spille med? ";
        std::cin >> playerBank;
        std::cout << "Hvor mye satser du? ";
        std::cin >> playerBet;

        int die1 = 0, die2 = 0;
        die.roll_die(&die1, &die2);
    }
}
