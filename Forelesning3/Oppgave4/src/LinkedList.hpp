#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <string>
#include "Node.hpp"
#include "../../Oppgave3/src/Person.hpp"

class LinkedList{
    private:
        Node *m_First;
        Node *m_Last;
        unsigned int m_Size;
    public:
        LinkedList();
        ~LinkedList();

        void add_front(Person *);
        void add_back(Person *);
        Person *get_person(std::string);
        int get_size();
        void list_all();
};

#endif
