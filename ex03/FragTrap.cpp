/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:38 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:42:39 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::attack(const std::string& target)
{
	if (getHitpoints() <= 0)
       std::cout << "FragTrap " << getName() << " cant attack, because it is dead..." << std::endl;
    else if (getEnergypoints() <= 0)
       std::cout << "FragTrap " << getName() << " cant attack, because no energy..." << std::endl;
    else
    {
        std::cout << "FragTrap " << getName() << " attacks " << target << " causing " << getAttackdamage() << " points of damage" << std::endl;
        setEnergypoints(getEnergypoints() - 1);  
    }
}
FragTrap::~FragTrap()
{
    std::cout << "(FragTrap) Destructor called" << std::endl;
}
FragTrap::FragTrap() : ClapTrap()
{
	setHitpoints(100);
	setAttackdamage(30);
	setEnergypoints(100);
    std::cout << "(FragTrap) Default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitpoints(100);
	setAttackdamage(30);
	setEnergypoints(100);
    std::cout << "(FragTrap) String constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << "(FragTrap) Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "(FragTrap) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        setName(src.getName());
        setHitpoints(src.getHitpoints());
        setEnergypoints(src.getEnergypoints());
        setAttackdamage(src.getAttackdamage());
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (getHitpoints() <= 0)
       std::cout << "FragTrap " << getName() << " cant give highFives, because it is dead..." << std::endl;
	else
        std::cout << "FragTrap " << getName() << " wants a highFive!" << std::endl;
}