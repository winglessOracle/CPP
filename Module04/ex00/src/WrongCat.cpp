/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/09/29 12:21:18 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	this->type = "WrongCat";
	std::cout	<<	"WrongCat: Default constructor called"	<<	std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal()	{
	*this = rhs;
	std::cout	<<	"WrongCat: Copy constructor called"	<<	std::endl;
}

const WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		this->type = other.type;
	std::cout	<<	"WrongCat: Copy assignment operator called"	<<	std::endl;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout	<< "WrongCat: Destructor called"	<< std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout 	<< ".PRRRRRRRRR..."	<< std::endl;
}
