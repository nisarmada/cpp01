/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:28:19 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/12 15:48:50 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name); //constructor
		~Zombie(); //destructor

		void announce();
};

	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);


#endif