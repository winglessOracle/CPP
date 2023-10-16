/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/14 15:15:06 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	this->type = "Dog";
	std::cout	<<	"Dog: Default constructor called"	<<	std::endl;
}

Dog::Dog(const Dog &rhs) : Animal() {
	std::cout	<<	"Dog: Copy constructor called"	<<	std::endl;
	*this = rhs;
}

const Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		this->type = other.type;
	std::cout	<<	"Dog: Copy assignment operator called"	<<	std::endl;
	return *this;
}

Dog::~Dog(void) {
	std::cout	<< "Dog: Destructor called"	<< std::endl;
}

void	Dog::makeSound(void) const {
	std::cout 	<< "..Grr..BauWauw! Grrrr!.."	<< std::endl;
}
