#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamond = DiamondTrap();
    diamond.info();
    diamond.whoAmI();
    DiamondTrap diamond2 = DiamondTrap("dia2");
    diamond2.info();
    diamond2.whoAmI();

    diamond.attack("Diamond2");
    diamond2.takeDamage(diamond.getAttackdamage());
    diamond.info();
    diamond2.info();

    diamond2.beRepaired(1);
    diamond2.info();

    diamond.highFivesGuys();
    diamond2.guardGate();
    std::cout << std::endl;
}