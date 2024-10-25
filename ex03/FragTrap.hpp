#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap	: virtual public ClapTrap
{
	public:
		void highFivesGuys(void);
        void attack(const std::string& target);
        ~FragTrap();
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &src);
};

#endif