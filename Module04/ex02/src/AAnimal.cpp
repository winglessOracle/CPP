/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/10 14:10:50 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal(void) : type("AAnimal"){
	std::cout	<<	"AAnimal: Default constructor called"	<<	std::endl;
}


AAnimal::AAnimal(const AAnimal & rhs) {
	std::cout	<<	"AAnimal: Copy constructor called"	<<	std::endl;

	*this = rhs;
}


const AAnimal & AAnimal::operator=(const AAnimal &other) {
	std::cout	<<	"AAnimal: Copy assignment operator called"	<<	std::endl;

	if (this != & other)
		this->type = other.type;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout	<< "AAnimal: Destructor called"	<< std::endl;
}

//==================================================================

std::string		AAnimal::getType(void) const {
	return this->type;
}

void	AAnimal::makeSound(void) const {
	std::cout 	<< "you hear indistinct aanimal sounds"	<< std::endl;
}
