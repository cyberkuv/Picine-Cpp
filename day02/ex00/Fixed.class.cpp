#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed(void){
    this->fxVal = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copyCon){
    std::cout << "Copy constructor called" << std::endl;
    *this = copyCon;
    return ;
}

Fixed &Fixed::operator=(Fixed const &opOval){
    std::cout << "Assignation operator called" << std::endl;
    this->fxVal = opOval.getRawBits();
    return *this;
}

int    Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fxVal);
}

void    Fixed::setRawBits(int const raw){
    this->fxVal = raw;
    return ;
}