/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:28:12 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/12 16:26:50 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* allocatedZombie;

	allocatedZombie = new Zombie(name);
	return (allocatedZombie);
}