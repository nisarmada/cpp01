/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:28:08 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/12 16:56:48 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main()
{
	randomChump("Foo");

	Zombie* z = newZombie("YO man");
	z->announce();
	delete(z);
	return 0;
}