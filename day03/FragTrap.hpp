#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
private:
    std::string     name;
    unsigned int    hitPoints;
    unsigned int    maxHitPoints;
    unsigned int    energyPoint;
    unsigned int    maxEnergyPoints;
    unsigned int    level;
    unsigned int    meleeAttackDamage;
    unsigned int    rangedAttackDamage;
    unsigned int    armorDamageReduc;
public:
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            vaulthunter_dot_exe(std::string const &target);

                    FragTrap( void );
                    ~FragTrap( void );
                    FragTrap(std::string const &name);
                    FragTrap(FragTrap const &alien);
};

#endif