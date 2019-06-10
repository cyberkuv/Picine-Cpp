#ifndef POEN_HPP
# define POEN_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : 
public Victim {
public:
	Peon(std::string name);
	~Peon(void);
	Peon(Peon const &copyCon);

	Peon	&operator=(Peon const &opVal);
	void    getPolymorphed(void) const;
};

#endif