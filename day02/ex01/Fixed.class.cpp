#include "Fixed.class.hpp"

Fixed::Fixed(void):	fxVal(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & n) {
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
	return;
}

Fixed::Fixed(int const num): fxVal(num << fracBits) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const num): fxVal(roundf(num * (1 << fracBits))) {
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	return (this->fxVal);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fxVal = raw;
	return;
}

int		Fixed::toInt(void) const {
	return (this->fxVal >> this->fracBits);
}

float	Fixed::toFloat(void) const {
	return (((float)(this->fxVal)) / (1 << fracBits));
}


Fixed & Fixed::operator=(Fixed const &opVal) {
	this->fxVal = opVal.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	 return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::ostream & operator<<(std::ostream & o, Fixed const & opVal) {
	o << opVal.toFloat();
	return (o);
}