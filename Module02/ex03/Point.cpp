/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 12:31:12 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/14 12:50:07 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point() : _x(0), _y(0) {
//	std::cout << "Point created" << std::endl;
}

//destructor
Point::~Point() {
//	std::cout	<<	"Point destructor called"	<<	std::endl;
}

Point::Point(float const a, float const b)	:	_x(a), _y(b) {
//	std::cout << "Point created" << std::endl;
}

Point::Point(const Point& rhs)	:	_x(rhs._x), _y(rhs._y)	{ 
//	std::cout	<<	"Point copy constructor called"	<<	std::endl;
}

//copy assignment operator overload
 Point& Point::operator=(const Point& rhs) {
//	std::cout	<<	"Point assignment operator called"	<<	std::endl;
	if (this != & rhs) {
		(Fixed)this->_x = rhs._x; //must typecast to make a copy as the members are private...
		(Fixed)this->_y = rhs._y;
	}
	return *this;
}

//getters
Fixed Point::getX(void) const {
	return this->_x;
}

Fixed Point::getY(void) const {
	return this->_y;
}
