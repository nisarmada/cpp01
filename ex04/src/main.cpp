/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 18:51:27 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 19:51:43 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../sed.hpp"

int main (int ac, char **av)
{
	std::string inputContent;
	std::string propaganda;

	if (ac != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		return (0);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	inputContent = extractContent(filename);
	// std::cout << inputContent << std::endl;
	propaganda = replaceContent(inputContent, s1, s2);
	std::cout << propaganda << std::endl;
}