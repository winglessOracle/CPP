/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:37:14 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 14:42:13 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/HumanB.h"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout  << "created " << _name << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->_name << " was destroyed" << std::endl;
}

void	HumanB::attack(void) {
	if (_weapon)
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks without a weapon" << std::endl;

}

void	HumanB::setWeapon(Weapon *someWeapon) {
	this->_weapon = someWeapon;
}
