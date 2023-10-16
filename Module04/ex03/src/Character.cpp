/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:20:17 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 12:26:54 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(void) : _name("Unnamed Character") {
	//std::cout	<<	"Character: Default constructor called. Created: '_nameless' " <<	std::endl;

	for (int i = 0 ; i < 4 ; i++)
		this->_equipment[i] = NULL;
}


Character::Character(std::string str) : _name(str) {
	//std::cout	<<	"Character: Overload constructor called. Created: "	<<	str << std::endl;

	for (int i = 0 ; i < 4 ; i++)
		this->_equipment[i] = NULL;
}


Character::Character(const Character& other) : _name(other._name) {
	//std::cout	<<	"Character: Copy constructor called"	<<	std::endl;

	for (int i = 0 ; i < 4 ; i++) {
		if (other._equipment[i] != NULL)
			this->_equipment[i] = other._equipment[i]->clone();
		else
			this->_equipment[i] = NULL;
	}
}


const Character& Character::operator=(const Character& rhs) {
//	std::cout	<<	"Character: Copy assign operator called"	<<	std::endl;

	if (this != &rhs) {
		
		this->_name = rhs._name;

		for (int i = 0 ; i < 4 ; i++) {
			delete this->_equipment[i];
			this->_equipment[i] = NULL;
		}
		
		for (int i = 0 ; i < 4 ; i++) {
			if (rhs._equipment[i] != NULL)
				this->_equipment[i] = rhs._equipment[i]->clone();
			else
				this->_equipment[i] = NULL;
		}	
	}
	return *this;
}


Character::~Character(void) {
//	std::cout	<<	"Character: Destructor called on "	<<	this->getName() << std::endl;
}

//===============================================================

std::string const & Character::getName(void) const {
	return this->_name;
}


void Character::equip(AMateria* m) {
	if(m == NULL) {
		std::cout	<< this->getName() <<	": Nothing to equip"	<<	std::endl;
		return;
	}

	if (m->isEquiped()) {
		std::cout << this->getName() << ": this " << m->getType() <<	" is already equiped" << std::endl;
		return;
	}

	for (int i = 0 ; i < 4 ; i++) {
		if (this->_equipment[i] == NULL) {
			this->_equipment[i] = m;
			m->toggleEquiped();
			std::cout << this->getName() <<	": Equiped " <<	this->_equipment[i]->getType() << " in _equipment slot " << i << std::endl;
			return;
		}
	}
	std::cout << this->getName() <<	": No more room to carry Materia"	<<	std::endl;
	return ;
}


void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
//		std::cout	<<	"invalid item slot passed" << std::endl;
		return;
	}
	
	if (this->_equipment[idx] == NULL) {
		std::cout	<< this->getName() << 	": Nothing to unequip"	<<	std::endl;
		return;
	}
	this->_equipment[idx]->toggleEquiped();
	std::cout	<<	this->_name << ": unequiped "	<<	this->_equipment[idx]->getType()	<<	std::endl;
	this->_equipment[idx] = NULL;
}


void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
//		std::cout	<<	"invalid item slot passed" << std::endl;
		return;
	}
		
	std::cout	<<	this->getName() << ": ";
	if (this->_equipment[idx] == NULL) {
		std::cout	<<	"Nothing to use on "	<<	target.getName() << std::endl;
		return;
	}

	this->_equipment[idx]->use(target);
}
