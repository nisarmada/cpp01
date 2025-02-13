/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 17:16:30 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:50:18 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanA.hpp"
#include "../HumanB.hpp"

int main ()
{
	Weapon w("small dick");

	HumanA bob("Bob", w);
	bob.attack();
	w.setType("big dick");
	bob.attack();


	Weapon d("Dingdong");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(d);
	jim.attack();
	return 0;
}