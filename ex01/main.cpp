#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap = ClapTrap("Clap");
    clap.info();
    ScavTrap scav = ScavTrap("Scav");
    scav.info();
    clap.attack(scav.getName());
    scav.takeDamage(clap.getAttackdamage());
    scav.attack(clap.getName());
    clap.takeDamage(scav.getAttackdamage());
    scav.info();
    clap.info();
    scav.beRepaired(2);
    clap.beRepaired(2);
    scav.info();
    scav.guardGate();
}