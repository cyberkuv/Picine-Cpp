#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : name("..."),
                            hitPoints(100),
                            maxHitPoints(100),
                            energyPoint(100),
                            maxEnergyPoints(100),
                            level(1),
                            meleeAttackDamage(30),
                            rangedAttackDamage(20),
                            armorDamageReduc(5) {
    std::cout << "\033[32;1m---The Dawn Of The Universe...\033[32;0m" << std::endl;
    std::cout << "\033[33;1mThe First Man \033[33;0m"
            << this->name << "\033[33;1m is created.\033[33;0m"
            << std::endl
            << "\033[33;1mHe Is Tasked With Protecting Humanity From The Aliens.\033[33;0m"
            << std::endl;
    return ;
}

FragTrap::~FragTrap( void ){
    std::cout << "\033[31;1m---Aliens Destroyed The World...\033[31;0m" << std::endl;
    return ;
}

void    FragTrap::rangedAttack(std::string const &target){
    std::cout << "FR4G-TP " << this->name << " attacks "
            << target << " at range, causing "
            << this->rangedAttackDamage << " points of damage !";
}

void    FragTrap::meleeAttack(std::string const &target){
    std::cout << "FR4G-TP " << this->name << " attacks "
            << target << " at melee, causing "
            << this->meleeAttackDamage << " points of damage !";
    return ;
}

FragTrap(std::string const &name) : name(name),
                                    hitPoints(100),
                                    maxHitPoints(100),
                                    energyPoint(100),
                                    maxEnergyPoints(100),
                                    level(1),
                                    meleeAttackDamage(30),
                                    rangedAttackDamage(20),
                                    armorDamageReduc(5) {
                                        std::cout << "\033[32;1m---The Dawn Of The Universe...\033[32;0m" << std::endl;
    std::cout << "\033[33;1mThe First Man \033[33;0m"
            << this->name << "\033[33;1m is created.\033[33;0m"
            << std::endl
            << "\033[33;1mHe Is Tasked With Protecting Humanity From The Aliens.\033[33;0m"
            << std::endl;
    
    return ;
}

FragTrap::FragTrap(FragTrap const &alien){
    *this = alien;
    return ;
}

void    FragTrap::takeDamage(unsigned int amount){
    unsigned int    damage;

    damage = amount - this->_armorDamageReduc;
    if (damage > this->_hitPoints){
        this->_hitPoints = 0;
        std::cout << this->_name << "\033[31;1m]: Peacefully Dead...\033[31;0m" << std::endl;
    } else {
        this->_hitPoints -= damage;
        std::cout << this->_name << ": And Am Back." << std::endl;
        std::cout << "Armor reduction: " << this->_armorDamageReduc\
                  << std::endl;
        std::cout << "Damage sustained: " << damage << std::endl;
        std::cout << "Current HP: " << this->_hitPoints << " / " \
                  << this->_maxHitPoints << std::endl;
    }
    return ;
}

void    FragTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHitPoints - this->_hitPoints)
		amount = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += amount;
	std::cout << "FR4G-TP " << this->_name
			<< " has " << amount << " Hit points!" << std::endl
			<< "Hit points remaining : "
			<< this->_hitPoints << std::endl;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25) {
		std::cout << "Running outta energy. Please charge now!" << std::endl;
		return;
	}
	this->_energyPoints -= 25;
	std::string attacks[] = { "shape shifting Attack",
							"super strength punch",
							"lazer eyes",
							"kinetic beems",
							"compressed air rifles" };
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " with " << attacks[rand() % 5]
			<< "." << std::endl
			<< "Energy @ =  "
			<< this->_energyPoints << std::endl;
	return;
}