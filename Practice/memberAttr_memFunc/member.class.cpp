#include <iostream>
#include "member.class.hpp"

// Defining a class and the options present in that class
member::member(){
    std::cout << "Constructor called" << std::endl;
    return ;
}

member::~member(){
    std::cout << "Deconstructor called" << std::endl;
    return ;  
}

void    member::bar(void){
    std::cout << "member function bar called" << std::endl;
    return ;
}