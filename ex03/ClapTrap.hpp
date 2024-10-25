#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap();
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(const ClapTrap &src);

    
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string getName(void) const;
        int getHitpoints(void) const;
        int getAttackdamage(void) const;
        int getEnergypoints(void) const;

        void setHitpoints(int amount);
        void setAttackdamage(int amount);
        void setEnergypoints(int amount);
        void setName(std::string name);

        void info(void);
};

#endif