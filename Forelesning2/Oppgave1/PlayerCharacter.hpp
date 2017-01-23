#pragma once
#include <string>

class PlayerCharacter{
    private:
        std::string m_Name;
        unsigned int m_Age;
    public:
        // The default constructor, called when making an instance of this class
        PlayerCharacter();
        // Constructor to set the name and age on initialization
        PlayerCharacter(std::string name, unsigned int age);
        // The destructor, called when the object is destroyed
        ~PlayerCharacter();

        // Set the private name variable
        void set_name(std::string name);
        // Get the private name variable
        std::string get_name() const;
        // Set the priavte age variable
        void set_age(unsigned int age);
        // Get the private age variable
        unsigned int get_age() const;
};
