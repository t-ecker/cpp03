#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
        std::string getName(void);
        int getHitpoints(void);
        int getAttackdamage(void);
        int getEnergypoints(void);
        void info(void);
};

#endif