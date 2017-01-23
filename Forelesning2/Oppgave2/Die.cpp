#include "Die.hpp"
#include <stdlib.h>
#include <ctime>

Die::Die(){
    srand(time(0));
}

Die::~Die(){

}

unsigned int Die::roll_die(){
    return rand() % 6 + 1;
}

void Die::roll_die(int &die1, int &die2){
    die1 = roll_die();
    die2 = roll_die();
}

void Die::roll_die(int *die1, int *die2){
    (*die1) = roll_die();
    (*die2) = roll_die();
}
