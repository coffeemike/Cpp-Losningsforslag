// Description: New Class
// Created by Jonas Knarbakk (02:36:12-30/01/2017)

#include <iostream>
#include <algorithm>
#include "ComponentRegister.hpp"

ComponentRegister::ComponentRegister(){
    m_Size = 0;
}

ComponentRegister::~ComponentRegister(){

}

void ComponentRegister::addComponent(Component component){
    m_Register.insert({component.getRegNr(), component});
    ++m_Size;
}

Component ComponentRegister::getComponent(std::string component){
    std::map<std::string, Component>::iterator it;

    for(it = m_Register.begin(); it != m_Register.end(); ++it){
        if(it->second.getRegNr().compare(component) == 0){
            return it->second;
        }
    }

    // If we cant find the component we are searching for
    // we return a new component since the assignment says
    // the function should return a component, there are better way
    // of doing this but that would mean changing the function signature...
    Component c("Not found", "Not Found", 0, "Not Found");
    return c;
}

std::vector<Component> ComponentRegister::getComponents(){
    std::vector<Component> reg;
    std::map<std::string, Component>::iterator it;
    
    for(it = begin(m_Register); it != end(m_Register); ++it){
        reg.push_back(it->second);
    }

    return reg;
}

int ComponentRegister::getSize(){
    return m_Size;
}
