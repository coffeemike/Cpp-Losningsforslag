#include "PlayerCharacter.hpp"
#include <iostream>

PlayerCharacter::PlayerCharacter(){
    m_Name = "Undefined";
    m_Age = 0;
}

PlayerCharacter::PlayerCharacter(std::string name, unsigned int age){
    m_Name = name;
    m_Age = age;
}

PlayerCharacter::~PlayerCharacter(){
    std::cout << m_Name << " was destroyed." << std::endl;
}

void PlayerCharacter::set_name(std::string name){
    m_Name = name;
}

std::string PlayerCharacter::get_name() const{
    return m_Name;
}

void PlayerCharacter::set_age(unsigned int age){
    m_Age = age;
}

unsigned int PlayerCharacter::get_age() const{
    return m_Age;
}
