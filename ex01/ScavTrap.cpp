#include "ClapTrap.h"

void ScavTrap::attack(const std::string& target)
{
	if (getHitpoints() <= 0)
       std::cout << "ScavTrap " << getName() << " cant attack, because it is dead..." << std::endl;
    else if (getEnergypoints() <= 0)
       std::cout << "ScavTrap " << getName() << " cant attack, because no energy..." << std::endl;
    else
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackdamage() << " points of damage" << std::endl;
        setEnergypoints(getEnergypoints() - 1);  
    }
}
ScavTrap::~ScavTrap()
{
    std::cout << "(ScavTrap) Destructor called" << std::endl;
}
ScavTrap::ScavTrap() : ClapTrap()
{
	setHitpoints(100);
	setAttackdamage(20);
	setEnergypoints(50);
    std::cout << "(ScavTrap) Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitpoints(100);
	setAttackdamage(20);
	setEnergypoints(50);
    std::cout << "(ScavTrap) String constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
	
{

}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << "is now in Gate keeper mode." << std::endl;
}