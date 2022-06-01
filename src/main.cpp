#include "def/mexception.hpp"

class BaseClass {
    public: 
    std::string name = "BaseClass."; 
}; 

class DerivedClass: public BaseClass {
    public: 
    int age = 21; 
    DerivedClass() {
        name = "DerviedClass"; 
    }
}; 


int main() {
    BaseClass &&c = DerivedClass(); 
    std::cout << "Get the address of the class instance: " 
        << &c << '\n'; 
    std::cout << "My name is " << c.name << '\n'; 
    // LASSERT (false); 
    bassert_eq ( 21 + 35, 66 ); 
    // assert (false); 
}