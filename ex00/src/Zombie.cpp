/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:28:17 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/13 12:13:30 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

//constructor just initializes variable values
Zombie::Zombie(std::string name)
{
	this->name = name;
}

//destructor prints a message
Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << ": Brraiiiiinz.." << std::endl;
}