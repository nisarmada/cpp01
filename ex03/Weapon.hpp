/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 15:36:13 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 17:14:19 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


# ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>


class Weapon{
	private:
		std::string type;
	public:
		Weapon(const std::string& type);
		// ~Weapon();

		const std::string& getType() const;
		void setType(std::string type);
};

#endif