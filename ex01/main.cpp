/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:41:32 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:41:33 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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