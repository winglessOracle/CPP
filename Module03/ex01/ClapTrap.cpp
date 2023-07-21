/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:45:09 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:34:41 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	this->_maxHP = this->_hitPoints;
	
	std::cout	<<	"ClapTrap: Default constructor called"	<<	std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	this->_maxHP = this->_hitPoints;

	std::cout	<<	"ClapTrap: Name constructor called >> " << this->_name << " is created"	<<	std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) { 
	*this = src;

	std::cout	<<	"ClapTrap: Copy constructor called"	<<	std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != & rhs) {
		this->_name			= rhs._name;
		this->_hitPoints 	= rhs._hitPoints;
		this->_energyPoints	= rhs._energyPoints;
		this->_attackDamage	= rhs._attackDamage;
		this->_maxHP		= rhs._maxHP;
	}
	std::cout	<<	"ClapTrap: Copy assignment operator called"	<<	std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout	<<	"ClapTrap: Default destructor called >> " << this->_name	<< " is destroyed" << std::endl;
}


//============= Member functions ====================//

void	ClapTrap::attack(std::string const & target) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is broken and cannot attack " << target << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout  << "ClapTrap " << this->_name << " is too weak to attack" << std::endl;
	
	else {
		std::cout  << "ClapTrap " << this->_name << " attacks " << target << " and does it " << _attackDamage << " damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\t(" << this-> _energyPoints << " energy points)" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout  << this->_name << " takes " << amount << " damage";

	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0) {
		std::cout << " and is broken" << std::endl;
		this->_hitPoints = 0;
	}
	else 
		std::cout << " and has " << this->_hitPoints << " hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << this->_name << " is broken and cannot repair itself" << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout  << this->_name << " is too weak to repair itself" << std::endl;	
	
	if (this->_hitPoints == this->_maxHP)
		std::cout  << this->_name <<" has max hitpoints and does not need to repair itself" << std::endl;
	
	else if(this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout  << this->_name << " is repaired and regains " << amount << " hitpoints." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	if (this->_hitPoints > this->_maxHP) {
		this->_hitPoints = this->_maxHP;
		std::cout  << "\t(" << "hitpoints are maxed out at " << this->_maxHP << ", " << this->_energyPoints << " energy points)" << std::endl;
	}
	else
		std::cout  << "\t(" << this->_hitPoints << " hitpoints, " << this->_energyPoints << " energy points)" << std::endl;
}

void	ClapTrap::setAttackDamange(int amount) {
	this->_attackDamage = amount;
}

void	ClapTrap::setEnergyPoints(int amount) {
	this->_energyPoints = amount;
}

void	ClapTrap::setHitPoints(int amount) {
	this->_hitPoints = amount;
}

int		ClapTrap::getAttackDamage(void) {
	return this->_attackDamage;
}

std::string const &	ClapTrap::getName(void) const {
	return this->_name;
}

std::ostream	&operator<<(std::ostream & newOstream, ClapTrap const & myTrap) {
	newOstream << "ClapTrap " << myTrap.getName();
	return newOstream;
}
