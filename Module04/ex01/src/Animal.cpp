/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/16 11:03:16 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void) : type("Animal") {
	std::cout	<<	"Animal: Default constructor called"	<<	std::endl;
}


Animal::Animal(const Animal & other) {
	std::cout	<<	"Animal: Copy constructor called"	<<	std::endl;
	
	*this = other;
}


const Animal & Animal::operator=(const Animal &rhs) {
	std::cout	<<	"Animal: Copy assignment operator called"	<<	std::endl;
	
	if (this != & rhs)
		this->type = rhs.type;
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
