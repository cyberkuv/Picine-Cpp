#include "Poen.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copyCon) : Victim(copyCon) {
	*this = copyCon;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void){
	std::cout << "Bleuark..." << std::endl;
}

Peon    &Peon::operator=(Peon const	&opVal){
	if (this != &opVal)
		Victim::operator=(opVal);
	return (*this);
}

void    Peon::getPolymorphed(void) const{
	std::cout << this->name
		<< " has been turned into a pink pony !" << std::endl;
}