/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 22:20:34 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 22:56:05 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Harl.hpp"

	void Harl::debug(void) {
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	};

	void Harl::info(void) {
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	};

	void Harl::warning(void) {
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	};

	void Harl::error(void) {
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	};

	void Harl::complain(std::string level)
	{
		harlLevels levels[] = {
			{"DEBUG", &Harl::debug},
			{"INFO", &Harl::info},
			{"WARNING", &Harl::warning},
			{"ERROR", &Harl::error}
		};

		for (int i = 0; i < 4; i++)
		{
			if (levels[i].level == level)
			{
				(this->*levels[i].functionPointer)();
				return ;
			}
		}
		std::cout << "invalid command " << level << std::endl;
	}