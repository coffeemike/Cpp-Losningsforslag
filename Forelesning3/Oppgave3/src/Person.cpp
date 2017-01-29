#include "Person.hpp"

Person::Person(){
    m_Name = "Undefined";
    m_Adress = "Undefined";
    m_PNumber = "Undefined";
}

Person::Person(std::string name, std::string adress, std::string pNumber){
    m_Name = name;
    m_Adress = adress;
    m_PNumber = pNumber;
}

Person::~Person(){
}

void Person::set_name(std::string name){
    m_Name = name;
}

std::string Person::get_name() const{
    return m_Name;
}

void Person::set_adress(std::string adress){
    m_Adress = adress;
}

std::string Person::get_adress() const{
    return m_Adress;
}

void Person::set_pnumber(std::string pnumber){
    m_PNumber = pnumber;
}

std::string Person::get_pnumber() const{
    return m_PNumber;
}

std::string Person::get_data() const{
    return "Name: " + m_Name + " Adress: " + m_Adress + " Person Number: " + m_PNumber;
}

bool operator ==(const Person &personOne, const Person &personTwo){
    return personOne.get_pnumber() == personTwo.get_pnumber();
}

bool operator <(const Person &personOne, const Person &personTwo){
    return personOne.get_pnumber() < personTwo.get_pnumber();    
}

bool operator >(const Person &personOne, const Person &personTwo){
    return personOne.get_pnumber() > personTwo.get_pnumber();    
}

std::ostream &operator <<(std::ostream &output, const Person &person){
    output << "Navn: " << person.get_name()
        << "\nAdresse: " << person.get_adress()
        << "\nPersonnummer: " << person.get_pnumber()
        << std::endl
        << std::endl;

    return output;
}

std::istream &operator >>(std::istream &input, Person &person){
    std::string name, adress, pnumber;
    std::cout << "Navn: ";
    std::cin >> name;
    std::cout << "Adresse: ";
    std::cin >> adress;
    std::cout << "Personnnummer: ";
    std::cin >> pnumber;
    person.set_name(name);
    person.set_adress(adress);
    person.set_pnumber(pnumber);

    return input;
}
