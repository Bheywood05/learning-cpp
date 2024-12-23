// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 2;
    auto b = 123123123123;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "hello world";

    std::cout << "Type of a: " << typeid(a).name() << "!" << std::endl;
    std::cout << "Type of b: " << typeid(b).name() << "!" << std::endl;
    std::cout << "Type of c: " << typeid(c).name() << "!" << std::endl;
    std::cout << "Type of d: " << typeid(d).name() << "!" << std::endl;
    std::cout << "Type of e: " << typeid(e).name() << "!" << std::endl;
    std::cout << "Type of f: " << typeid(f).name() << "!" << std::endl;
    std::cout << "Type of g: " << typeid(g).name() << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
