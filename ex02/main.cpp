/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 13:08:00 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 13:20:31 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR;
	std::string& stringREF = string;
	
	stringPTR = &string;
	std::cout << "memory address " << &string << std::endl;
	std::cout << "memory address pointer " << stringPTR << std::endl;
	std::cout << "REF memory address " << &stringREF << std::endl;

	std::cout << "String value " << string << std::endl;
	std::cout << "StringPTR value " << *stringPTR << std::endl;
	std::cout << "StringREF value " << stringREF << std::endl;
}