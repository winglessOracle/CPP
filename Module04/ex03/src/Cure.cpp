/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:04:51 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 12:16:07 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
//	std::cout	<<	"Cure: Default constructor called"	<<	std::endl;
}


Cure::Cure(const Cure & other) : AMateria() {
//	std::cout	<<	"Cure: Copy constructor called"	<<	std::endl;

	*this = other;
}


const Cure& Cure::operator=(const Cure & rhs) {
//	std::cout	<<	"Cure: Copy assign operator called"	<<	std::endl;

	if (this != & rhs) {
		this->type = rhs.type;
		this->equiped = rhs.equiped;
	}
	return *this;
}


Cure::~Cure(void) {
//	std::cout	<<	"Cure: Destructor called"	<<	std::endl;
}


AMateria* Cure::clone()const  {
	AMateria* temp = new Cure;
//	std::cout	<<	"Cure: Cloned"	<<	std::endl;
	return temp;
}


void Cure::use(ICharacter & target) {
	std::cout	<<	"* heals "	<<	target.getName()	<< "'s wounds *"	<<	std::endl;
}
