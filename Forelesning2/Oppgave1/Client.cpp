#include <iostream>
#include "PlayerCharacter.hpp"

int main(){
    
    // Decleare a new PlayerCharacter on the stack with defined name and age
    PlayerCharacter pc("Jonas", 26);

    // Print the variables
    std::cout << pc.get_name() << " " << pc.get_age() << std::endl;

    // Set the name and age to different values
    pc.set_name("Erlend");
    pc.set_age(31);

    // Print the variables
    std::cout << pc.get_name() << " " << pc.get_age() << std::endl;

    // Declare a new PlayerCharacter on the heap with defined name and age
    PlayerCharacter *pc2 = new PlayerCharacter("Ole", 20);

    // Print the varibales
    std::cout << pc2->get_name() << " " << pc2->get_age() << std::endl;

    // Delete the PlayerCharacter on the heap now that we are done with it
    delete pc2;

    return 0;
}
