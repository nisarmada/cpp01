/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 12:34:51 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 13:03:30 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();

		void announce() const;
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif