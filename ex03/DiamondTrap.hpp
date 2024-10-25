#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap	: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
        void attack(const std::string& target);
        ~DiamondTrap();
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		void whoAmI();
		void info(void);
};

#endif