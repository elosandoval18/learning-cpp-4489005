// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //This two variables are at the same level of indentation as the main function. This means they are GLOBAL variables which are accessible by any part of the code. Memory for global variables is manages statically by the compiler. They are allocated in the data section of memory and once the program ends, memory is freed. 

// In the other hand local variables are declarated inside a function, when the function is done then the variables are deleted and the memory is freed.

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "Flag = " << my_flag << std::endl;
 
    my_flag = true;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a  << std::endl;
    std::cout << "Flag = " << my_flag << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl; //instead of giving you 2 as a result, it does give you 2 but in binary, so you need to be very careful.

    std::cout << std::endl << std::endl;

    return (0);
}
