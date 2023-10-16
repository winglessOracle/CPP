/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 10:20:01 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:02:02 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain: Default constructor called" << std::endl;

	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = "";
}


Brain::Brain(const Brain & other) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	
	for (int i = 0 ; i < 100 ; i++) {
		this->ideas[i] = other.ideas[i];
	}
}


const Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	
	if (this != & rhs)
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}


Brain::~Brain(void) {
	std::cout << "Brain: Destructor called" << std::endl;
}
