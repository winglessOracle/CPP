/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:51 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/09/07 10:43:38 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Weapon.h"

Weapon::Weapon(){}

Weapon::Weapon(std::string typeName) : type(typeName) {}

Weapon::~Weapon(){}

//getter
const std::string Weapon::getType(void) {
		const std::string &weaponREF = this->type;
		return weaponREF;
}

//setter
void	Weapon::setType(std::string typeName) {
	this->type = typeName;
}
