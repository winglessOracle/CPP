/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:45:09 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:41:10 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void) {
	this->_hitPoints 	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	this->_maxHP 		= this->_hitPoints;

	std::cout	<<	"ScavTrap: Default constructor called"	<<	std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->_name			= name;
	this->_hitPoints 	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	this->_maxHP 		= this->_hitPoints;

	std::cout	<<	"ScavTrap: Name constructor called >> " << this->_name << " is created"	<<	std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)	{ 
	*this = src;

	std::cout	<<	"ScavTrap: Copy constructor called"	<<	std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	if (this != & rhs) {
		this->_name			= rhs._name;
		this->_hitPoints 	= rhs._hitPoints;
		this->_energyPoints	= rhs._energyPoints;
		this->_attackDamage	= rhs._attackDamage;
		this->_maxHP		= rhs._maxHP;
	}
	std::cout	<<	"ScavTrap: Copy assignment operator called"	<<	std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout	<<	"ScavTrap: Default destructor called >> " << this->_name	<< " is destroyed" << std::endl;
}


//============= Member functions ====================//

void	ScavTrap::attack(std::string const & target) {
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is broken and cannot attack " << target << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is too weak to attack" << std::endl;
	
	else {
		std::cout << this->_name << " does a ScavTrap attack on " << target << " and does it " << _attackDamage << " damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\t(" << this-> _energyPoints << " energy points)" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is broken and cannot guard the gate" << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is too weak to guard the gate" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in 'Gate keeper' mode!!" << std::endl;
}
