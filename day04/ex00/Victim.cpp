#include "Victim.hpp"

Victim::Victim(std::string name) : name(name) {
	std::cout << "Some random victim called " << this->name
		<< " just popped !" << std::endl; 
}

Victim::Victim(Victim const &copyCon){
	*this = copyCon;
	std::cout << "Some random victim called " << this->name
		<< " just popped !" << std::endl;
}

Victim::~Victim(void){
	std::cout << "Victim " << this->name
		<< " just died for no apparent reason !" << std::endl;
}

Victim  &Victim::operator=(Victim const	&opVal){
	if (this != &opVal)
		this->name = opVal.name;
	return *this;
}

std::ostream    &operator<<(std::ostream &o, Victim const &intro)
{
	o << "I'm " << intro.getName()
		<< " and i like otters !" << std::endl;
	return o;
}

void    Victim::getPolymorphed(void) const {
	std::cout << this->name
		<< " has been turned into a cute little sheep !" << std::endl;
}

std::string const	&Victim::getName(void) const { 
    return (this->name);
}