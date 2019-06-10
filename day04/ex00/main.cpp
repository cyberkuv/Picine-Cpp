#include "Sorcerer.hpp"
#include "Poen.hpp"
#include "Victim.hpp"

int     main(void) {
    Sorcerer alvax("ALVAX", "SORCERER SUPREME");
    Victim frodon("Frodon");
	Peon peon("Pink Invisible Peon");

    std::cout << alvax;
	std::cout << frodon;
	std::cout << peon;

	alvax.polymorph(frodon);
    alvax.polymorph(peon);
    return 0;
}