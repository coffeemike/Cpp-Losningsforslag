// Description: New Class
// Created by Jonas Knarbakk (21:00:09-23/01/2017)

#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList(){
    m_Size = 0;
    m_First = nullptr;
    m_Last = nullptr;
}

LinkedList::~LinkedList(){
    Node *current = m_First;
    Node *next = nullptr;
    while(current != nullptr){
        next = current->get_next();
        delete current;
        current = next;
    }
}

void LinkedList::add_front(Person *p){
    Node *object = new Node(p);
    if(m_First == nullptr){
        m_First = object;
        if(m_Last == nullptr){
            m_Last = object;
        }
    } else {
        m_First->set_previous(object);
        object->set_next(m_First);
        m_First = object;
    }
    m_Size++;
}

void LinkedList::add_back(Person *p){
    Node *object = new Node(p);
    if(m_Last == nullptr){
        m_Last = object;
        if(m_First == nullptr){
            m_First = object;
        }
    } else {
        m_Last->set_next(object);
        object->set_previous(m_Last);
        m_Last = object;
    }
    m_Size++;
}

Person *LinkedList::get_person(std::string pnumber){
    Node *current = m_First;
    while(current->get_next() != nullptr){
        if(current->get_data()->get_pnumber().compare(pnumber) == 0){
            return current->get_data();
        }
    }
    return nullptr;
}

int LinkedList::get_size(){
    return m_Size;
}

void LinkedList::list_all(){
    Node *current = m_First;
    while(current != nullptr){
        std::cout << current->get_data()->get_data() << std::endl;
        if(current->get_next() != nullptr){
            current = current->get_next();
        } else {
            return;
        }
    }
    
    std::cout << "The list is empty." << std::endl;
}
