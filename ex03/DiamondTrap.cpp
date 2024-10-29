/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:30 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:42:31 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "(DiamondTrap) Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap() 
    : ClapTrap(), _name("no-name")
{
	setHitpoints(FragTrap::getHitpoints());
	setAttackdamage(FragTrap::getAttackdamage());
	setEnergypoints(ScavTrap::getEnergypoints());
    std::cout << "(DiamondTrap) Default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), _name(name)
{
	setHitpoints(FragTrap::getHitpoints());
	setAttackdamage(FragTrap::getAttackdamage());
	setEnergypoints(ScavTrap::getEnergypoints());
    std::cout << "(DiamondTrap) String constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << "(DiamondTrap) Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "(DiamondTrap) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _name = src.get_dia_name();
        setName(src.getName());
        setHitpoints(src.getHitpoints());
        setEnergypoints(src.getEnergypoints());
        setAttackdamage(src.getAttackdamage());
    }
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << _name << " | ClapTrap name: " << ClapTrap::getName() << "\n" << std::endl;
}

void DiamondTrap::info(void)
{
    std::cout << std::endl;
    std::cout << "name: " << this->_name << std::endl;
    std::cout << "hit points: " << getHitpoints() << std::endl;
    std::cout << "energy points: " << getEnergypoints() << std::endl;
    std::cout << "attack damage: " << getAttackdamage() << std::endl;
    std::cout << std::endl;
}

std::string DiamondTrap::get_dia_name(void) const
{
    return (this->_name);
}
