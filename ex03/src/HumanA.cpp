/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:35:04 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:36:59 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanA.hpp"

HumanA::HumanA (const std::string& name, Weapon& weapon): name(name) ,weapon(weapon){};

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}