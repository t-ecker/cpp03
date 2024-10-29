/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:02 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 14:42:03 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap	: public ClapTrap
{
	public:
		void highFivesGuys(void);
        void attack(const std::string& target);
        ~FragTrap();
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &src);
};

#endif