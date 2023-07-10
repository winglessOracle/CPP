/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:36:54 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 14:42:32 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/HumanA.h"

HumanA::HumanA(std::string name, Weapon &someWeapon) : _name(name), _weapon(someWeapon) {
	std::cout  << "created " << _name << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->_name << " was destroyed" << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
