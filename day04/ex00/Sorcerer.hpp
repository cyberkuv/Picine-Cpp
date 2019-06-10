#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>

class Sorcerer
{
private:
    std::string name;
    std::string title;

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &copyCon);
    Sorcerer &operator=(Sorcerer const &opVal);

    void				polymorph(Victim const &victim) const;
	std::string	const	&getName(void) const;
    std::string const	&getTitle(void) const;

    ~Sorcerer(void);
};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &intro);

#endif