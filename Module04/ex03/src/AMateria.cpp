/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:20:17 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/14 14:53:30 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(void) : type("default"), equiped(false) {
	//std::cout	<<	"AMateriat: Default constructior called"	<<	std::endl;
}


AMateria::AMateria(std::string const & str) : type(str), equiped(false) {
	//std::cout	<<	"AMateriat: Overload constructor called"	<<	std::endl;
}


AMateria::AMateria(const AMateria & other) {
	//std::cout	<<	"AMateriat: Copy constructor called"	<<	std::endl;
	
	*this = other;
}


const AMateria& AMateria::operator=(const AMateria & rhs) {
	//std::cout	<<	"AMateria: Copy assignment operator called"	<<	std::endl;
	
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}


AMateria::~AMateria(void) {
//	std::cout	<<	"AMateria: Destructor called"	<<	std::endl;
}

//=============================================================


std::string const & AMateria::getType(void) const {
	return this->type;
}


bool AMateria::isEquiped(void) const {
	return this->equiped;
}


void AMateria::toggleEquiped(void) {
	if (this->equiped)
		this->equiped = false;
	else
		this->equiped = true;
} 


void AMateria::use(ICharacter & target) {
	std::cout	<<	" * AMateria: use function called on "	<<	target.getName()	<< "*"	<<	std::endl;
}
