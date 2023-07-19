/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:12 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 13:21:38 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

// void	leaks(void){
// 	std::cout << "\n------------" << std::endl;
// 	system("leaks fixed -q");
// }

int		main(void) {
	
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << "\n------------" << std::endl;
	std::cout	<<	a.getRawBits()	<< std::endl;
	std::cout	<<	b.getRawBits()	<< std::endl;
	std::cout	<<	c.getRawBits()	<< std::endl;

	// atexit(leaks);
	return (0);
}
