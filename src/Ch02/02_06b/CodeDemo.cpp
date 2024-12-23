// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 4244
#define DEBUG

int main(){
    int32_t a = CAPACITY;
    uint8_t b = 6;
#ifdef DEBUG
    std::cout << "[About to perform addition]" << std::endl;
#endif
    std::cout << "the value of a+b is: " << a+b << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
