/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 12:34:32 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 14:35:30 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main ()
{
	Zombie* zombie;

	zombie = zombieHorde(8, "Foo");
	if (zombie)
	{
		for (int i = 0; i < 8; i++)
		{
			zombie[i].announce();
		}
	}
	delete[] zombie;
}