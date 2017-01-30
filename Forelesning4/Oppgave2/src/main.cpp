// Description: New project
// Author: Jonas Knarbakk (02:13:26-30/01/2017)

#include <iostream>
#include <string>
#include <map>

int main(){

    // Create a map that will work like a dictionary norwegian -> english
    std::map<std::string, std::string> dictionary;

    // Create som entries for the dictionary
    dictionary.insert({"foretrekke", "prefer"});
    dictionary.insert({"liker", "like"});
    dictionary.insert({"snakke", "chat"});
    dictionary.insert({"trollmann", "wizard"});
    dictionary.insert({"vise", "show"});

    // Create an iterator to traverse our dictionary
    std::map<std::string, std::string>::iterator it;

    // Find the element with the "foretrekke" key
    it = dictionary.find("foretrekke");

    // Do something with our findings
    if(it != dictionary.end()){
        std::cout << it->first << " er " << it->second << "\n\n";
    } else {
        std::cout << "Could not find key!" << std::endl;
    }

    std::cout << "Innholdet i et map med norsk/engelsk\n\n";

    // Print the whole dictionary
    for(it = begin(dictionary); it != end(dictionary); ++it){
        std::cout << it->first << " - " << it->second << std::endl;
    }

    return 0;

}
