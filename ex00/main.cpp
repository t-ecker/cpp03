/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:41:18 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:41:19 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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