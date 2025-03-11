/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 17:16:30 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 14:39:00 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanA.hpp"
#include "../HumanB.hpp"

int main ()
{
	Weapon w("baseball bat");

	HumanA bob("Bob", w);
	bob.attack();
	w.setType("katana");
	bob.attack();


	Weapon d("knife");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(d);
	jim.attack();
	return 0;
}