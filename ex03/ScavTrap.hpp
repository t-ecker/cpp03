/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:59 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:43:00 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
#define SCAFTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap	: virtual public ClapTrap
{
	public:
		void guardGate();
        void attack(const std::string& target);
        ~ScavTrap();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);
};

#endif