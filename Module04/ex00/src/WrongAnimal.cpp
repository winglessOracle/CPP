/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongWrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/10 09:54:54 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout	<<	"WrongAnimal: Default constructor called"	<<	std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & rhs) {
	std::cout	<<	"WrongAnimal: Copy constructor called"	<<	std::endl;
	*this = rhs;
}

const WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != & other)
		this->type = other.type;
	std::cout	<<	"WrongAnimal: Copy assignment operator called"	<<	std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout	<< "WrongAnimal: Destructor called"	<< std::endl;
}

//==================================================================

std::string		WrongAnimal::getType(void) const {
	return this->type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout 	<< "You hear indistinct but definatly WRONG animal sounds!!..."	<< std::endl;
}
