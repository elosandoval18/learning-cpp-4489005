// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str; //string variable declaration
    std::cout << "Enter your name: " << std::flush; //flush is used to make sure that this line of code has been completely sent to the terminal before the next line shows 
    std::cin >> str; //capturing input into str variable
    std::cout << "Nice to meet you, " << str << "!" << std::endl; //to concatenate elements.

    std::cout << std::endl << std::endl;
    return (0);
}
