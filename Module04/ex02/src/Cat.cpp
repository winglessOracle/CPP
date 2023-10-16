/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/16 11:19:21 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()  {
	std::cout	<<	"Cat: Default constructor called"	<<	std::endl;
	
	this->type = "Cat";
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = "";
}


Cat::Cat(const Cat &other) : AAnimal()	{
	std::cout	<<	"Cat: Copy constructor called"	<<	std::endl;

	this->type = other.type;
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = other._brain->ideas[i];
}


const Cat &Cat::operator=(const Cat &rhs) {
	std::cout	<<	"Cat: Copy assignment operator called"	<<	std::endl;
	
	if (this != &rhs) {
		delete this->_brain;
		this->_brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = rhs._brain->ideas[i];
		
		this->type = rhs.type;
	}
	return *this;
}


Cat::~Cat(void) {
	std::cout	<< "Cat: Destructor called"	<< std::endl;
	
	delete this->_brain;
}

//========

void Cat::makeSound(void) const {
	std::cout 	<< ".PRRRRRRRRR..."	<< std::endl;
}


void Cat::addIdea(std::string idea) {
	for (int i = 0; i < 100; i++) {
		if (this->_brain->ideas[i].empty()) {
			this->_brain->ideas[i] = idea;
			return;
		}
	}
	std::cout << "no more head space. idea lost" << std::endl;
}


void Cat::listIdeas(void) const {
	for (int i = 0; i < 100; i++) {
		if (!this->_brain->ideas[i].empty()) {
			std::cout << "idea " << i << " = " << this->_brain->ideas[i] << std::endl;
		}
	}
}


Brain*	Cat::getBrainAddress(void){
	return this->_brain;
}
