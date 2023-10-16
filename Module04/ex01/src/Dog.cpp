/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:15:08 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/10/16 11:21:10 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()  {
	std::cout	<<	"Dog: Default constructor called"	<<	std::endl;
	
	this->type = "Dog";
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = "";
}


Dog::Dog(const Dog &other) : Animal()	{
	std::cout	<<	"Dog: Copy constructor called"	<<	std::endl;

	this->type = other.type;
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = other._brain->ideas[i];
}


const Dog &Dog::operator=(const Dog &rhs) {
	std::cout	<<	"Dog: Copy assignment operator called"	<<	std::endl;
	
	if (this != &rhs) {
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = rhs._brain->ideas[i];
	}
	return *this;
}


Dog::~Dog(void) {
	std::cout	<< "Dog: Destructor called"	<< std::endl;
	
	delete this->_brain;
}

//============================

void Dog::makeSound(void) const {
	std::cout 	<< "..GRRR...BAUWAUW! GRR..."	<< std::endl;
}


void Dog::addIdea(std::string idea) {
	for (int i = 0; i < 100; i++) {
		if (this->_brain->ideas[i].empty()) {
			this->_brain->ideas[i] = idea;
			return;
		}
	}
	std::cout << "no more head space. idea lost" << std::endl;
}


void Dog::listIdeas(void) const {
	for (int i = 0; i < 100; i++) {
		if (!this->_brain->ideas[i].empty()) {
			std::cout << "idea " << i << " = " << this->_brain->ideas[i] << std::endl;
		}
	}
}


Brain*	Dog::getBrainAddress(void){
	return this->_brain;
}
