// Description: New project
// Author: Jonas Knarbakk (02:32:16-30/01/2017)

#include <iostream>
#include "ComponentRegister.hpp"

int main(){

    // Test of functions
    ComponentRegister reg;

    // Create some component
    Component laptop1("1234", "Laptop", 12, "Section H");
    Component laptop2("5678", "Laptop", 8, "Section D");
    Component desktop1("9876", "Desktop", 8, "Section G");
    Component desktop2("5432", "Desktop", 12, "Section G");

    // Add components to the map
    reg.addComponent(laptop1);
    reg.addComponent(laptop2);
    reg.addComponent(desktop1);
    reg.addComponent(desktop2);

    // Search for a component
    Component printInfo = reg.getComponent("5678");
    std::cout << "Searching for regNr 5678\n";
    std::cout << printInfo.getData() << "\n\n";

    // Search for something that does not exist
    std::cout << "Searching for a noen existant regNr\n";
    printInfo = reg.getComponent("1337");
    std::cout << printInfo.getData() << "\n\n";

    // Print map size
    std::cout << "Printing size of the ComponentRegister: " << reg.getSize() << "\n\n";

    // Get vector list of components
    std::vector<Component> com = reg.getComponents();
    // Print the list
    std::vector<Component>::iterator it;
    
    std::cout << "Printing vector list:\n";

    for(it = begin(com); it != end(com); ++it){
        std::cout << it->getData() << std::endl;
    }

    return 0;
}
