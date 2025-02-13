/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 15:42:18 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:50:40 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


# ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon = nullptr;
	public:
		HumanB(const std::string name);
		// ~HumanB();
		void attack() const;
		void setWeapon(Weapon& newWeapon);
};

#endif