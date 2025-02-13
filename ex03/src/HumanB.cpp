/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:39:12 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:50:37 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	this->name = name;
};


void HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

void HumanB::attack() const
{
	if (weapon == nullptr)
		std::cout << name << " is unarmed.. so they attack with their fists!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
		 
}
