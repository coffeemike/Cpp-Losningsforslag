// Description: New Class
// Created by Jonas Knarbakk (21:13:43-23/01/2017)

#include "Node.hpp"

Node::Node(Person *person){
    m_Data = person;
    m_Next = nullptr;
    m_Previous = nullptr;
}

Node::~Node(){
    m_Data = nullptr;
    m_Next = nullptr;
    m_Previous = nullptr;
}

void Node::set_next(Node *next){
    m_Next = next;
}

Node *Node::get_next(){
    return m_Next;
}

void Node::set_previous(Node *previous){
    m_Previous = previous;
}

Node *Node::get_previous(){
    return m_Previous;
}
    
std::string Node::get_pnumber(){
    return m_Data->get_pnumber();
}

Person * Node::get_data(){
    return m_Data;
}
