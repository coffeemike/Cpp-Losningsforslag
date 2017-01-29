#pragma once

#include <string>
#include <iostream>

class Person {
    private:
        std::string m_PNumber;
        std::string m_Name;
        std::string m_Adress;
    public:
        Person();
        Person(std::string, std::string, std::string);
        ~Person();

        void set_pnumber(std::string pnumber);
        std::string get_pnumber() const;
        void set_name(std::string name);
        std::string get_name() const;
        void set_adress(std::string adress);
        std::string get_adress() const;
        std::string get_data() const;
        // Overloading of the == operator to make a rule for comparison
        friend bool operator ==(const Person &, const Person &);
        // Overloading of the < operator to make a rule for comparison
        friend bool operator <(const Person &, const Person &);
        // Overloading of the > operator to make a rule for comparison
        friend bool operator >(const Person &, const Person &);
        // Overloading of the << operator to make a rule for printing output via cout
        friend std::ostream &operator <<(std::ostream &, const Person &);
        // Overloading of the >> operator to make a rule for taking input via cin
        friend std::istream &operator >>(std::istream &, Person &);
};
