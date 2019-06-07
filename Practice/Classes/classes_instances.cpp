#include <iostream>
#include "classes_instances.hpp"

// Defining a class and the options present in that class
classes_instances::classes_instances()
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

classes_instances::~classes_instances()
{
    std::cout << "Deconstructor called" << std::endl;
    return ;
    
}