/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:20:17 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 12:16:00 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")  {
//	std::cout	<<	"Ice: Default constructor called"	<<	std::endl;
}


Ice::Ice(const Ice & other) : AMateria() {
//	std::cout	<<	"Ice: Copy constructor called"	<<	std::endl;

	*this = other;
}


const Ice& Ice::operator=(const Ice & rhs) {
//	std::cout	<<	"Ice: Copy assign operator called"	<<	std::endl;

	if (this != & rhs) {
		this->type = rhs.type;
		this->equiped = rhs.equiped;
	}
	return *this;
}


Ice::~Ice(void) {
//	std::cout	<<	"Ice: Destructor called"	<<	std::endl;
}


AMateria* Ice::clone()const  {
	AMateria* temp = new Ice;
//	std::cout	<<	"Ice: Cloned"	<<	std::endl;
	return temp;
}


void Ice::use(ICharacter & target) {
	std::cout	<<	"* shoots an ice bolt at "	<<	target.getName()	<<	" *"	<<	std::endl;
}
