/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 11:36:59 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// Default constructor
Fixed::Fixed()	:	_fixedPointNumber(0)	{
	std::cout	<<	"Default constructor called"	<<	std::endl;
}

// Destructor
Fixed::~Fixed() {
	std::cout	<<	"Destructor called"	<<	std::endl;
}

// Int constructor
Fixed::Fixed(const int n)	:	_fixedPointNumber(n * 256)	{
	std::cout	<<	"Int constructor called"	<<	std::endl;
}

// Float constructor
Fixed::Fixed(const float f) :	_fixedPointNumber(roundf(f * 256))	{
	std::cout	<<	"Float constructor called"	<<	std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& rhs) { 
	std::cout	<<	"Copy constructor called"	<<	std::endl;
	_fixedPointNumber = rhs._fixedPointNumber;
}

// Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout	<<	"Copy assignment operator called"	<<	std::endl;
	if (this != & rhs) {
		_fixedPointNumber = rhs._fixedPointNumber;
	}
	return *this;
}


// Getter
int Fixed::getRawBits(void) const {
//	std::cout	<<	"getRawBits member function called"	<<	std::endl;
	return _fixedPointNumber;
}

// Setter
void Fixed::setRawBits(int const raw) {
	_fixedPointNumber = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPointNumber / 256);
}

int	Fixed::toInt(void) const {
	return ((int)_fixedPointNumber / 256);
}

//overload for ostream insert operator
std::ostream& operator<< (std::ostream& output, const Fixed& rhs) {
	output << rhs.toFloat();
	return output;
}
