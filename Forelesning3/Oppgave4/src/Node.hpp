#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include "../../Oppgave3/src/Person.hpp"

class Node{
    private:
        Node *m_Next;
        Node *m_Previous;
        Person *m_Data;
    public:
        Node(Person *);
        ~Node();

        void set_next(Node *);
        Node *get_next();
        void set_previous(Node *);
        Node *get_previous();
        std::string get_pnumber();
        Person * get_data();
};

#endif
