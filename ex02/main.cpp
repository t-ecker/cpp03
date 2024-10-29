/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:06 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:42:07 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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