#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): name(name),
                                                        title(title) {
	std::cout << this->name
		<< ", " << this->title
		<< ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copyCon) {
	*this = copyCon;
	std::cout << this->name
		<< ", " << this->title
		<< ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->name
		<< ", " << this->title
        << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer    &Sorcerer::operator=(Sorcerer const	&opVal) {
	if (this != &opVal) {
		this->name = opVal.name;
		this->title = opVal.title;
	}
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Sorcerer const &intro)
{
	o << "I am " << intro.getName()
		<< ", " << intro.getTitle()
		<< ", and I like ponies !" << std::endl;
	return (o);
}

std::string	const	&Sorcerer::getName(void) const { 
    return (this->name);
}
std::string const	&Sorcerer::getTitle(void) const {
    return (this->title);
}

void    Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}