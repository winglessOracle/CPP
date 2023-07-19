/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 11:59:30 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// Default constructor
Fixed::Fixed()	:	_fixedPointNumber(0)	{
//	std::cout	<<	"Default constructor called"	<<	std::endl;
}

// Int constructor
Fixed::Fixed(const int n)	:	_fixedPointNumber(n * 256)	{
//	std::cout	<<	"Int constructor called"	<<	std::endl;
}

// Float constructor
Fixed::Fixed(const float f) :	_fixedPointNumber(roundf(f * 256))	{
//	std::cout	<<	"Float constructor called"	<<	std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& rhs) { 
//	std::cout	<<	"Copy constructor called"	<<	std::endl;
	_fixedPointNumber = rhs._fixedPointNumber;
}

// Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& rhs) {
//	std::cout	<<	"Copy assignment operator called"	<<	std::endl;
	if (this != & rhs) {
		_fixedPointNumber = rhs._fixedPointNumber;
	}
	return *this;
}

// Destructor
Fixed::~Fixed() {
//	std::cout	<<	"Destructor called"	<<	std::endl;
}

// Getter
int		Fixed::getRawBits(void) const {
//	std::cout	<<	"getRawBits member function called"	<<	std::endl;
	return this->_fixedPointNumber;
}

// Setter
void	Fixed::setRawBits(int const raw) {
	_fixedPointNumber = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPointNumber / 256);
}

int		Fixed::toInt(void) const {
	return (int)_fixedPointNumber / 256;
}



// ---------------------comparisson operators----------------------------//
bool Fixed::operator>(const Fixed& rhs) const {
	return (this->_fixedPointNumber > rhs._fixedPointNumber); }
	
bool Fixed::operator<(const Fixed& rhs) const {
	return (this->_fixedPointNumber < rhs._fixedPointNumber); }

bool Fixed::operator>=(const Fixed& rhs) const {
	return (this->_fixedPointNumber >= rhs._fixedPointNumber); }

bool Fixed::operator<=(const Fixed& rhs) const {
	return (this->_fixedPointNumber <= rhs._fixedPointNumber); }

bool Fixed::operator==(const Fixed& rhs) const {
	return (this->_fixedPointNumber == rhs._fixedPointNumber); }
	
bool Fixed::operator!=(const Fixed& rhs) const {
	return (this->_fixedPointNumber != rhs._fixedPointNumber); }


// ---------------------artithmatic operators----------------------------//
Fixed Fixed::operator+(const Fixed& rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat()); }

Fixed Fixed::operator-(const Fixed& rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat()); }

Fixed Fixed::operator*(const Fixed& rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat()); }

Fixed Fixed::operator/(const Fixed& rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat()); }


// ---------------------increment and decrement operators------------------//
//pre: modify value and return using REF to self
Fixed& Fixed::operator++(void) {
	++this->_fixedPointNumber;
	return *this;
}

Fixed& Fixed::operator--(void) {
	--this->_fixedPointNumber;
	return *this;
}

//post: store the current value, modify it and then return the old stored value.
Fixed Fixed::operator++(int) {
	Fixed tmp (*this);
	++this->_fixedPointNumber;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp (*this);
	--this->_fixedPointNumber;
	return tmp;
}


// -------------------min max operators---------------------------------//
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a._fixedPointNumber < b._fixedPointNumber)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a._fixedPointNumber > b._fixedPointNumber)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a._fixedPointNumber < b._fixedPointNumber)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a._fixedPointNumber > b._fixedPointNumber)
		return a;
	return b;	
}


// -----------------non class ostream overload---------------------------//
std::ostream& operator<< (std::ostream& output, const Fixed& rhs) {
	output << rhs.toFloat();
	return output;
}
