#ifndef PERSONREGISTER_HPP
#define PERSONREGISTER_HPP

#include <string>
#include <vector>
#include "Person.hpp"

class Personregister{
    private:
        std::vector<Person> m_Persons;
        unsigned int m_Size;
    public:
        Personregister();
        ~Personregister();

        void add_person(Person);
        bool delete_person(std::string);
        std::string get_person(std::string);
        int get_size();
};

#endif
