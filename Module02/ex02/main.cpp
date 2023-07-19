/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:12 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/19 19:31:44 by cwesseli      ########   odam.nl         */
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
		Fixed		a;
		Fixed const	b(Fixed(5.05f) * Fixed(2));
	
		std::cout	<< "\n---------------------------------------\n" << std::endl;
		std::cout	<< a << std::endl;
		std::cout	<< ++a << std::endl;
		std::cout	<< a << std::endl;
		std::cout	<< a++ << std::endl;
		std::cout	<< a << std::endl;

		std::cout	<< b << std::endl;

		std::cout	<< Fixed::max(a, b) << std::endl;
	}
	std::cout	<< "\n---------------------------------------\n" << std::endl;
	{
		Fixed	a(5);
		Fixed	b(10);
		//const	Fixed b(10); //to check the const option
		std::cout	<< "a: " << a << std::endl;
		std::cout	<< "b: " << b << std::endl;
		std::cout	<< "the bigger value is altered to 3" << std::endl;
		Fixed::max(a, b) = Fixed(3);
		std::cout	<< "a: " << a << std::endl;
		std::cout	<< "b: " << b << std::endl;
	}
	std::cout	<< "\n---------------------------------------\n" << std::endl;
	{

		const Fixed	a(5);
		const Fixed	b(10);
		std::cout	<< "a: " << a.toInt() << std::endl;
		std::cout	<< "b: " << b.toInt() << std::endl;
		std::cout	<< "the bigger value is " << Fixed::max(a, b) << std::endl;
	}
	std::cout	<< "\n---------------------------------------\n" << std::endl;
	{
		Fixed	a(42);
		Fixed	b(42.42f);
		Fixed	c;
		std::cout	<< "a: " << a << std::endl;
		std::cout	<< "b: " << b << std::endl;
		c = a * b;
		std::cout	<< "c = a * b: " << c << std::endl;
		c = a / b;
		std::cout	<< "c = a / b: " << c << std::endl;
		c = a + b;
		std::cout	<< "c = a + b: " << c << std::endl;
		c = a - b;
		std::cout	<< "c = a - b: " << c << std::endl;
	}
	std::cout	<< "\n---------------------------------------\n" << std::endl;
	{
		Fixed	a(42);
		Fixed	b(42.42f);
		Fixed	c;
		std::cout	<< "a: " << a << std::endl;
		std::cout	<< "b: " << b << std::endl;
		if (b == a) 
			std::cout	<< "b == a" << std::endl;
		if (b != a) 
			std::cout	<< "b != a" << std::endl;
		if (b <= a) 
			std::cout	<< "b <= a" << std::endl;
		if (b >= a) 
			std::cout	<< "b >= a" << std::endl;
		if (b > a) 
			std::cout	<< "b > a" << std::endl;
		if (b < a) 
			std::cout	<< "b < a" << std::endl;
	}
	// atexit(leaks);
	return (0);
}
