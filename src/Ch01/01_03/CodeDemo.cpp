// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 


// Ask for the user's name and reply by printing a message addresing the user's name
#include <iostream>
#include <string>

int main(){
    std::string str("Type your username");
    std::cout << str;
    std::cout << std::endl;

    std::cin >> str; // This function only works for single words. For chains of text you need another function.
    
    std::string greet("Thanks");
    std::cout <<greet;

    std::cout << std::endl << std::endl;
    return (0);
}
