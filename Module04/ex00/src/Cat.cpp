/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/14 15:34:42 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout	<<	"Cat: Default constructor called"	<<	std::endl;

	this->type = "Cat";
}


Cat::Cat(const Cat &rhs) : Animal()	{
	std::cout	<<	"Cat: Copy constructor called"	<<	std::endl;

	*this = rhs;
}


const Cat &Cat::operator=(const Cat &other) {
	std::cout	<<	"Cat: Copy assignment operator called"	<<	std::endl;
	
	if (this != &other)
		this->type = other.type;
	return *this;
}


Cat::~Cat(void) {
	std::cout	<< "Cat: Destructor called"	<< std::endl;
}


void	Cat::makeSound(void) const {
	std::cout 	<< ".PRRRRRRRRR.miauw."	<< std::endl;
}
