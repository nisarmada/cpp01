/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 19:02:47 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 20:37:14 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../sed.hpp"

std::string replaceContent(std::string& str, const std::string& s1, const std::string& s2)
{
	size_t pos = 0;
	if (s1.empty())
	{
		std::cerr << "string cannot be empty" << std::endl;
		exit(EXIT_FAILURE);
	}
	//we need checks for empty string etc
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
		pos += s2.length();
	}
	return (str);
}

std::string extractContent(std::string filename)
{
	std::string fileContent;
	std::string line;
	std::ifstream readingFile(filename);

	if (!readingFile.is_open())
	{
		std::cout << "Couldn't open file" << std::endl;
		exit(EXIT_FAILURE);
	}
	while (std::getline(readingFile, line))
	{
		fileContent += line + '\n';
	}
	readingFile.close();
	return (fileContent);
}