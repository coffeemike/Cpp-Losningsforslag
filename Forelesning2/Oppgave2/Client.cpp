#include "Die.hpp"
#include <iostream>

int main(){
    int die1 = 0, die2 = 0;

    Die die;

    die.roll_die(&die1, &die2);

    std::cout << "The dices rolled to: " << die1 << " " << die2 << std::endl;    

    return 0;
}
