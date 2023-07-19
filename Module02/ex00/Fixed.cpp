/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 10:32:58 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

//default constructor
Fixed::Fixed()	:	_fixedPointNumber(0)	{
	std::cout	<<	"Default constructor called"	<<	std::endl;
}

//destructor
Fixed::~Fixed() {
	std::cout	<<	"Destructor called"	<<	std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed& rhs) { 
	std::cout	<<	"Copy constructor called"	<<	std::endl;
	setRawBits(rhs.getRawBits());
}

//copy assignment operator overload
const Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout	<<	"Copy assignment operator called"	<<	std::endl;
	if (this != & rhs) {
		setRawBits(rhs.getRawBits());
	}
	return *this;
}

//getter
int Fixed::getRawBits(void) const {
	std::cout	<<	"getRawBits member function called"	<<	std::endl;
	return _fixedPointNumber;
}

//setter
void Fixed::setRawBits(int const raw) {
	_fixedPointNumber = raw;
}
