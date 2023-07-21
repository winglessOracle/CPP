/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:45:09 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:54:19 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
	std::cout	<<	"DiamondTrap: Default constructor called"	<<	std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ScavTrap(name),  FragTrap(name) {
	
	this->_name				= name;
	ClapTrap::_name			= name + "_clap_name";
	
	std::cout	<<	"DiamondTrap: Name constructor called >> " << this->_name << " is created"	<<	std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ScavTrap(src), FragTrap(src) { 
	*this = src;
	
	std::cout	<<	"DiamondTrap: Copy constructor called"	<<	std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
	if (this != & rhs) {
		this->_name			= rhs._name;
		this->_hitPoints	= rhs._hitPoints;
		this->_energyPoints	= rhs._energyPoints;
		this->_attackDamage	= rhs._attackDamage;
		this->_maxHP		= rhs._maxHP;			
	}
	std::cout	<<	"DiamondTrap: Copy assignment operator called"	<<	std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout	<<	"DiamondTrap: Default destructor called >> " << this->_name	<< " is destroyed" << std::endl;
}

//============= Member functions ====================//

void	DiamondTrap::whoAmI(void) {
	if (this->_hitPoints == 0)
		std::cout << "DiamondTrap " << this->_name << " is broken and cannot announce itself" << std::endl;
	
	else if (this->_energyPoints == 0)
		std::cout << "DiamondTrap " << this->_name << " is too weak to announce itself" << std::endl;
	
	else
		std::cout << "DiamondTrap " << this->_name << "says 'Hi! My name is " << this->_name << " but my ClapTrap name is " << ClapTrap::_name << "'" << std::endl;
}
