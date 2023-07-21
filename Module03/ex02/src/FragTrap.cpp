/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:45:09 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 15:47:50 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void) {
	this->_hitPoints 	= 100;
	this->_energyPoints	= 100;
	this->_attackDamage	= 30;
	this->_maxHP 		= this->_hitPoints;

	std::cout	<<	"FragTrap: Default constructor called"	<<	std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->_name			= name;
	this->_hitPoints 	= 100;
	this->_energyPoints	= 100;
	this->_attackDamage	= 30; 
	this->_maxHP 		= this->_hitPoints;

	std::cout	<<	"FragTrap: Name constructor called >> " << this->_name << " is created"	<<	std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) { 
	*this = src;

	std::cout	<<	"FragTrap: Copy constructor called"	<<	std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	if (this != & rhs) {
		this->_name			= rhs._name;
		this->_hitPoints	= rhs._hitPoints;
		this->_energyPoints	= rhs._energyPoints;
		this->_attackDamage	= rhs._attackDamage;
		this->_maxHP		= rhs._maxHP;
	}
	std::cout	<<	"FragTrap: Copy assignment operator called"	<<	std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout	<<	"FragTrap: Default destructor called >> " << this->_name	<< " is destroyed" << std::endl;
}


//============= Member functions ====================//


void	FragTrap::attack(std::string const & target) {
	if (this->_hitPoints == 0)
		std::cout << "FragTrap " << this->_name << " is broken and cannot attack " << target << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " is too weak to attack" << std::endl;
	
	else {
		std::cout << this->_name << " does a FragTrap attack on " << target << " and does it " << _attackDamage << " damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\t(" << this-> _energyPoints << " energy points)" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {
	if (this->_hitPoints == 0)
		std::cout << "FragTrap " << this->_name << " is broken and cannot do high fives" << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " is too weak to call for a high five" << std::endl;
	
	else {
		std::cout << "FragTrap " << this->_name << " Shouts: 'Hi guys, come on! Gimme a HIGH FIVE!!!! WHOOOOOO!!! GOGOGO!!!'" << std::endl;
	}
}
