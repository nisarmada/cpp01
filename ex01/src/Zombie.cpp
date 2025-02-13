/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 12:38:25 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 12:59:26 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
};

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce() const
{
	std::cout << name << ": Brrrraiinz" << std::endl;
}

