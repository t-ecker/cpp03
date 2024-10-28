#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap main;
    ClapTrap target("ren");
    main.info();
    main.attack(target.getName());
    target.takeDamage(main.getAttackdamage());
    target.info();
    target.beRepaired(2);
    target.info();
}