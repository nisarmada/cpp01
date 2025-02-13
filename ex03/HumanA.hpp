/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 15:34:29 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 16:56:20 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA 
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(const std::string& name, Weapon& weapon);
		
		void changeWeapon(const std::string newWeapon);
		void attack() const;
};

#endif