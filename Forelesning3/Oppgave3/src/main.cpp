// Description: New project
// Author: Jonas Knarbakk (18:49:18-23/01/2017)

#include <iostream>
#include "Person.hpp"
#include "Personregister.hpp"

void test_delete(std::string pnumber, Personregister &pr);
void test_delete_success(std::string pnumber, Personregister &pr);

int main(){
    Personregister pr;
    
    Person jonas("1337", "Jonas Knarbakk", "Matrix");
    Person erlend("1234", "Erlend", "Et sted i minnet");
    Person mikkel("4321", "Mikkel", "Poontown");
    Person affe("9876", "Affe", "Php city");
    pr.add_person(jonas);
    pr.add_person(erlend);
    pr.add_person(mikkel);
    pr.add_person(affe);

    std::cout << pr.get_person("1337") << std::endl;
    std::cout << pr.get_person("1234") << std::endl;
    std::cout << pr.get_person("4321") << std::endl;
    std::cout << pr.get_person("9876") << std::endl;

    std::cout << "Vector size is " << pr.get_size() << std::endl;
    
    test_delete("1337", pr);
    test_delete("1234", pr);
    test_delete("4321", pr);
    test_delete("9876", pr);

    test_delete_success("1337", pr);
    test_delete_success("1234", pr);
    test_delete_success("4321", pr);
    test_delete_success("9876", pr);
}

void test_delete(std::string pnumber, Personregister &pr){
    std::string data = pr.get_person(pnumber);
     if(pr.delete_person(pnumber)){
        std::cout << "\033[1;32mRemoved " << data << " successfully.\033[0m\n";
    } else {
        std::cout << "\033[1;31mFailed to remove " << data << ".\033[0m\n";
    }
   
}

void test_delete_success(std::string pnumber, Personregister &pr){
    if(pr.get_person(pnumber).compare("not found") == 0){
        std::cout << "\033[1;32mFailed to delete_success " << pnumber << " it must have been deleted.\033[0m\n";
    } else {
        std::cout << "\033[1;31mSucessfully delete_successd " << pnumber << " deletion must have failed.\033[0m\n";
    }
}
