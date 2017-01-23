// Description: Person register is a class made too
// keep Person objects in a vector
// Created by Jonas Knarbakk (18:50:59-23/01/2017)

#include "Personregister.hpp"

Personregister::Personregister(){
    m_Size = 0;
}

Personregister::~Personregister(){
}

void Personregister::add_person(Person p){
    m_Persons.push_back(p);
    m_Size++;
}

bool Personregister::delete_person(std::string pNumber){
    for(unsigned int i = 0; i < m_Size; i++){
        if(m_Persons[i].get_pnumber().compare(pNumber) == 0){
            m_Persons.erase(m_Persons.begin() + i);
            m_Size--;
            return true;
        }
    }
    return false;
}

std::string Personregister::get_person(std::string pNumber){
    for(unsigned int i = 0; i < m_Size; i++){
        if(m_Persons[i].get_pnumber().compare(pNumber) == 0){
            return m_Persons[i].get_data();
        }
    }
    return "not found";
}

int Personregister::get_size(){
    return m_Size;
}

