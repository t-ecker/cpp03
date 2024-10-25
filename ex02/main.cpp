#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap = ClapTrap("Clap");
    clap.info();
    FragTrap Frag = FragTrap("Frag");
    Frag.info();
    clap.attack(Frag.getName());
    Frag.takeDamage(clap.getAttackdamage());
    Frag.attack(clap.getName());
    clap.takeDamage(Frag.getAttackdamage());
    Frag.info();
    clap.info();
    Frag.highFivesGuys();
}