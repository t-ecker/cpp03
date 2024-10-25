#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    :   _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap()
    :   _name("no-name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    :   _name(src._name), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_damage(src._attack_damage)
{
    std::cout << "Copy constructor called" << std::endl;
}   

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _name = src._name;
        _hit_points = src._hit_points;
        _energy_points = src._energy_points;
        _attack_damage = src._attack_damage;
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

std::string ClapTrap::getName(void)
{
    return (_name);
}
int ClapTrap::getHitpoints(void)
{
    return (_hit_points);
}
int ClapTrap::getAttackdamage(void)
{
    return (_attack_damage);
}
int ClapTrap::getEnergypoints(void)
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

