/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:41:14 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:41:15 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        void info(void);
};

#endif