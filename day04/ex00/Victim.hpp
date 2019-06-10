#ifndef VICTIM_HPP
# define VICTIM_HPP
#include "Poen.hpp"
#include <iostream>
#include <string>

class Victim {
protected:
	std::string name;
public:
	Victim(std::string name);
	~Victim(void);
	Victim(Victim const &copyCon);

	Victim				&operator=(Victim const &opval);
	virtual void		getPolymorphed(void) const;
	std::string	const	&getName(void) const;
};

std::ostream    &operator<<(std::ostream &o, Victim const &intro);

#endif