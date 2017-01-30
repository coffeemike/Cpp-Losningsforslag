// Class supplied by the assignment
#include "Component.hpp"

Component::Component() {

}

Component::Component(std::string rNr, std::string tpe, int numCC, std::string pl){
    setRegNr(rNr);
    setType(tpe);
    setNumCpuCores(numCC);
    setPlace(pl);
}

void Component::setRegNr(std::string rNr){
    regNr = rNr;
}

void Component::setType(std::string tpe){
    type = tpe;
}

void Component::setNumCpuCores(int ncc){
    numCpuCores = ncc;
}

void Component::setPlace(std::string pl){
    place = pl;
}

std::string Component::getRegNr(){
    return regNr;
}

std::string Component::getType(){
    return type; 
}

int Component::getNumCpuCores(){
    return numCpuCores;
}

std::string Component::getPlace(){
    return place;
}

std::string Component::getData(){
    return regNr + " " + type + " " + place + " " + std::to_string(numCpuCores);
}

Component::~Component() {

}
