/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:12 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 13:21:52 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

// void	leaks(void){
// 	std::cout << "\n------------" << std::endl;
// 	system("leaks fixed -q");
// }

int		main(void) {
	{
		std::cout << "\n------------" << std::endl;

		Fixed		a;
		Fixed const	b(10);
		Fixed const	c(42.42f);
		Fixed const	d (b);
		
		a = Fixed(1234.4321f);

		std::cout	<< "a is "	<< a << std::endl;
		std::cout	<< "b is "	<< b << std::endl;
		std::cout	<< "c is "	<< c << std::endl;
		std::cout	<< "d is "	<< d << std::endl;

		std::cout	<< "a is "	<< a.toInt() << " as integer" <<	std::endl;
		std::cout	<< "b is "	<< b.toInt() << " as integer" <<	std::endl;
		std::cout	<< "c is "	<< c.toInt() << " as integer" <<	std::endl;
		std::cout	<< "d is "	<< d.toInt() << " as integer" <<	std::endl;
	}	
	
	std::cout	<< "\n------------------------------------------------------\n" << std::endl;
	
	{
		int 	safe(8388607); // Int max / 256 (2^8) = 2,147,483,647 / 256 = 8,388,607.
		int 	overflow(8388608);
		float	negative(-42.45f);
		
		Fixed	s(safe); 
		Fixed	o(overflow);
		Fixed	n(negative);

		std::cout	<< "\nsafe:\t\t"	<< safe << std::endl;
		std::cout	<< "overflow:\t"	<< overflow << std::endl;
		std::cout	<< "safe fpn:\t"	<< s << std::endl;
		std::cout	<< "overflow fpn:\t"	<< o << std::endl;
		std::cout	<< "safe raw:\t"	<< s.getRawBits() << std::endl;
		std::cout	<< "overflow raw:\t"	<< o.getRawBits() << std::endl;
		std::cout	<< "safe int:\t"	<< s.toInt() << std::endl;
		std::cout	<< "overflow int:\t"	<< o.toInt() << std::endl;
		std::cout	<< "\nnegative:\t"	<< negative << std::endl;
		std::cout	<< "negative fpn:\t"	<< n << std::endl;
		std::cout	<< "negative:\t"	<< n.toInt() << "\n" << std::endl;
	}
	
	// atexit(leaks);
	return (0);
}
