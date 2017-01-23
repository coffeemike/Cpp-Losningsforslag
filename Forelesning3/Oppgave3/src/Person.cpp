#include "Person.hpp"

Person::Person(){
    m_PNumber = "Undefined";
    m_Name = "Undefined";
    m_Adress = "Undefined";
}

Person::Person(std::string pNumber, std::string name, std::string adress){
    m_PNumber = pNumber;
    m_Name = name;
    m_Adress = adress;
}

Person::~Person(){
}

std::string Person::get_pnumber() const{
    return m_PNumber;
}

std::string Person::get_name() const{
    return m_Name;
}

std::string Person::get_adress() const{
    return m_Adress;
}

std::string Person::get_data() const{
    return "Person Number: " + m_PNumber + " Name: " + m_Name + " Adress: " + m_Adress;
}
