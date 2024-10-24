#ifndef SCAFTRAP_HPP
#define SCAFTRAP_HPP

#include "ClapTrap.h"

class ScavTrap	: public ClapTrap
{
	public:
		void guardGate();
        void attack(const std::string& target);
        ~ScavTrap();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		
		

};

#endif