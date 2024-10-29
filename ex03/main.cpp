/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:46 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:42:47 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamond("dia");
    diamond.info();
    diamond.whoAmI();
    DiamondTrap diamond2("dia2");
    diamond2.info();
    diamond2.whoAmI();

    diamond.attack("dia2");
    diamond2.takeDamage(diamond.getAttackdamage());
    diamond.info();
    diamond2.info();

    diamond2.beRepaired(1);
    diamond2.info();

    diamond.highFivesGuys();
    diamond2.guardGate();
    std::cout << std::endl;
}

    //     Correct:                
     
    //         C
    //        / \
    //    (v)S   F(v)  
    //        \ /
    //         D

    //     Wrong:

    //     C     C
    //     |     |
    //     F     S
    //     \     /
    //      \   /
    //        D