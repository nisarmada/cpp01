/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 18:51:27 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 13:21:37 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../sed.hpp"
//we still need to make the .replace file and output there
int main (int ac, char **av)
{
	std::string inputContent;
	std::string propaganda;
	std::string outputFilename;

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
	outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Couldnt create " << outputFilename << std::endl;
		return (EXIT_FAILURE);
	}
	outputFile << propaganda;
	outputFile.close();
}