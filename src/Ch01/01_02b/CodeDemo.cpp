// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> // We are using a library iostream. This is a library thats part of the C++ standar libraries that contains object and functions
//that allow us to print text to the screen and receive text from the keyboard.
// Preprocess or directives do not end on a semicolon.

int main() { //parenthesis indicate that we are using an empty list of parameters. Curly brackets delimit the body of a function.
    std::cout << "Hi, there" << std::endl;

    std::cout << std::endl << std::endl;
    // This is to have two endline characters to separate my output from the debugers exit message just for convinience.

    return(0);
    //std es un namespace que contiene todas las funciones y objetos estandar de c++
    // :: es el operador que se usa para acceder a algún miembro de ese namespace (std)
    // cout es el objeto dentro de ese std que representa la salida estándar (una pantalla en este caso)
    // un namespace agrupa identificadores para evitar conflictor al nombrar variables, funciones, clases, etc.
    // std::endl means "end line"
} 

