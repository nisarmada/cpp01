/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 22:39:39 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/13 22:58:45 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Harl.hpp"

int main (){
	Harl harl;

	harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INVALID");
}