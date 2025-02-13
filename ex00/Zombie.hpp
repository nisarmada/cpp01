/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:28:19 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/13 12:13:04 by nikos         ########   odam.nl         */
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

		void announce() const;
};

	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);


#endif