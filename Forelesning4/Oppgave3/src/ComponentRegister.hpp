#ifndef COMPONENTREGISTER_HPP
#define COMPONENTREGISTER_HPP

#include <string>
#include <map>
#include <vector>
#include "Component.hpp"

class ComponentRegister{
    private:
        unsigned int m_Size;
        std::map<std::string, Component> m_Register;
    public:
        ComponentRegister();
        ~ComponentRegister();

        void addComponent(Component);
        Component getComponent(std::string);
        std::vector<Component> getComponents();
        int getSize();
};

#endif
