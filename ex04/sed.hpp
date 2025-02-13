/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 18:50:41 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 20:29:55 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef SED_HPP
#define SED_HPP
#include <iostream>
#include <fstream>
#include <string>


std::string extractContent(std::string filename);
std::string replaceContent(std::string& str, const std::string& s1, const std::string& s2);


#endif