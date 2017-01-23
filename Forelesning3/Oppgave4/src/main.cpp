// Description: Oppgave 4 fra forelesning 3
// Author: Jonas Knarbakk (20:55:01-23/01/2017)

#include <iostream>
#include "LinkedList.hpp"

int main(){

    LinkedList *aList = new LinkedList();

    Person jonas("1337", "Jonas Knarbakk", "Matrix");
    Person erlend("1234", "Erlend", "Et sted i minnet");
    Person mikkel("4321", "Mikkel", "Poontown");
    Person affe("9876", "Affe", "Php city");

    aList->add_front(&jonas);
    aList->add_front(&erlend);
    aList->add_back(&mikkel);
    aList->add_back(&affe);

    aList->list_all();

    delete aList;
    
    return 0;
}
