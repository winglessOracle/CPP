/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:14:55 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 12:26:10 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
//	std::cout	<<	"MateriaSource: Default constructor called"	<<	std::endl;
	
	for (int i = 0 ; i < 4 ; i++)
		this->_knownMateria[i] = NULL;

	for (int i = 0 ; i < 100 ; i++)
		this->existingMateria[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
//	std::cout	<<	"MateriaSource: Copy constructor called"	<<	std::endl;

	for (int i = 0 ; i < 4 ; i++) {
		if (other._knownMateria[i] != NULL)
			this->_knownMateria[i] = other._knownMateria[i]->clone();
		else
			this->_knownMateria[i] = NULL;
	}

	for (int i = 0 ; i < 100 ; i++)
		this->existingMateria[i] = NULL;
}


const MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
//	std::cout	<<	"MateriaSource: Copy assign operator called"	<<	std::endl;
	
	if (this != &rhs) {
		
		for (int i = 0 ; i < 4 ; i++) {
			delete this->_knownMateria[i];
			this->_knownMateria[i] =  NULL;
		}

		for (int i = 0 ; i < 4 ; i++) {
			if (rhs._knownMateria[i] != NULL)
				this->_knownMateria[i] = rhs._knownMateria[i]->clone();
			else
				this->_knownMateria[i] = NULL;
		}
		
		for (int i = 0 ; i < 100 ; i++)
			this->existingMateria[i] = NULL;
	}
	return *this;
}


MateriaSource::~MateriaSource(void) {
//	std::cout	<<	"MateriaSource: Destructor called"	<<	std::endl;

	for (int i = 0 ; i < 4 ; i++) {
		delete this->_knownMateria[i];
		this->_knownMateria[i] = NULL;
	}
	
	for (int j = 0 ; j < 100 ; j++) {
		delete this->existingMateria[j];
		this->existingMateria[j] = NULL;
	}
}

//=============================================================
		
void MateriaSource::learnMateria(AMateria* mat) {
	if (!mat){
		std::cout	<<	"Can't learn nothingness!"	<<	std::endl;
		return;
	}
	for (int i = 0 ; i < 4 ; i++) {
		if (this->_knownMateria[i] == NULL) {
			this->_knownMateria[i] = mat;
			std::cout	<<	"MateriaSource: Learned "	<<	mat->getType() << " at slot: " << i << std::endl;
			return;
		}
	}
	std::cout	<<	"MateriaSource: No more room to learn new stuff. Passed Materia deleted"	<<	std::endl;
	delete mat;
	return;
}


AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0 ; i < 4 ; i++) {
		if (this->_knownMateria[i] != NULL && this->_knownMateria[i]->getType() == type) {
			for (int j = 0; j < 100; j++) {
				if (this->existingMateria[j] == NULL) {
//					std::cout	<<	"Creating "	<<	this->_knownMateria[i]->getType() << ":" << std::endl;
					this->existingMateria[j] = this->_knownMateria[i]->clone();
					return this->existingMateria[j];
				} 
			}
			std::cout	<<	"Source is depleted. did not create Materia"	<<	std::endl; //in case more than 100 Materia are created
			return 0;
		}
	}
	std::cout << "Materiasource: Don't know that Materia. Didn't create it."	<<	std::endl;
	return 0;
}


void MateriaSource::listMateria(void) const {
	std::cout	<<	"MateriaSource: listing all materia created by source:"	<<	std::endl;
	for (int i = 0; i < 100; i++) {
		if (existingMateria[i] != NULL)
			std::cout << "slot " << i << "->" << existingMateria[i]->getType() << std::endl;
	}
}
