#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    :   _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "(ClapTrap) String constructor called" << std::endl;
}

ClapTrap::ClapTrap()
    :   _name("no-name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "(ClapTrap) Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "(ClapTrap) Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    :   _name(src.getName()), _hit_points(src.getHitpoints()), _energy_points(src.getEnergypoints()), _attack_damage(src.getAttackdamage())
{
    std::cout << "(ClapTrap) Copy constructor called" << std::endl;
}   
 
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "(ClapTrap) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _name = src.getName();
        _hit_points = src.getHitpoints();
        _energy_points = src.getEnergypoints();
        _attack_damage = src.getAttackdamage();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
       std::cout << "ClapTrap " << _name << " cant attack, because it is dead..." << std::endl;
    else if (_energy_points <= 0)
       std::cout << "ClapTrap " << _name << " cant attack, because no energy..." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack_damage << " points of damage" << std::endl;
        _energy_points--;  
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points <= 0)
       std::cout << "ClapTrap " << _name << " cant take damage, because it is dead..." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points damage" << std::endl;
        _hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points <= 0)
       std::cout << "ClapTrap " << _name << " cant repair, because it is dead..." << std::endl;
    else if (_energy_points <= 0)
       std::cout << "ClapTrap " << _name << " cant repair, because no energy..." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " heals himself by " << amount << " points" << std::endl;
        _hit_points += amount;
        _energy_points--;
    }
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}
int ClapTrap::getHitpoints(void) const
{
    return (_hit_points);
}
int ClapTrap::getAttackdamage(void) const
{
    return (_attack_damage);
}
int ClapTrap::getEnergypoints(void) const
{
    return (_energy_points);
}

void ClapTrap::info(void)
{
    std::cout << std::endl;
    std::cout << "name: " << _name << std::endl;
    std::cout << "hit points: " << _hit_points << std::endl;
    std::cout << "energy points: " << _energy_points << std::endl;
    std::cout << std::endl;
}

void ClapTrap::setHitpoints(int amount)
{
    _hit_points = amount;
}
void ClapTrap::setAttackdamage(int amount)
{
    _attack_damage = amount;
}
void ClapTrap::setEnergypoints(int amount)
{
    _energy_points = amount;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}