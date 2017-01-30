// Class supplied by the assignment
#pragma once
#include <string>

class Component{
    public:
        Component();
        Component(std::string, std::string, int, std::string);
        void setRegNr(std::string);
        void setType(std::string);
        void setNumCpuCores(int);
        void setPlace(std::string);
        std::string getRegNr();
        std::string getType();
        int getNumCpuCores();
        std::string getPlace();
        std::string getData();
        ~Component();
     private:
        std::string regNr;           //registreringsnummer
        std::string type;            //type – laptop/stasjonær
        int numCpuCores;        //antall prosessorkjerner
        std::string place;           //hvor komponenten er plassert
};
