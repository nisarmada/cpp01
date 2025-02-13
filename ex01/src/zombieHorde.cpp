/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 12:48:02 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 12:57:14 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	zombieHorde;

	if (N <= 0)
		return (nullptr);
	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}