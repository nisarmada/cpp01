/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 15:44:04 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:36:22 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	this->type = type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string& Weapon::getType() const
{
	return (type);
}