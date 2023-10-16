/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/14 15:33:08 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void) : type("Animal") {
	std::cout	<<	"Animal: Default constructor called"	<<	std::endl;
}

Animal::Animal(const Animal & rhs) {
	std::cout	<<	"Animal: Copy constructor called"	<<	std::endl;
	*this = rhs;
}

const Animal & Animal::operator=(const Animal &other) {
	if (this != & other)
		this->type = other.type;
	std::cout	<<	"Animal: Copy assignment operator called"	<<	std::endl;
	return *this;
}

Animal::~Animal(void) {
	std::cout	<< "Animal: Destructor called"	<< std::endl;
}

//==================================================================

std::string		Animal::getType(void) const {
	return this->type;
}

void	Animal::makeSound(void) const {
	std::cout 	<< "you hear indistinct animal sounds"	<< std::endl;
}
