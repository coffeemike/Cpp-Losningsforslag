#pragma once

#include <string>

class Person {
    private:
        std::string m_PNumber;
        std::string m_Name;
        std::string m_Adress;
    public:
        Person();
        Person(std::string, std::string, std::string);
        ~Person();

        std::string get_pnumber() const;
        std::string get_name() const;
        std::string get_adress() const;
        std::string get_data() const;
};
