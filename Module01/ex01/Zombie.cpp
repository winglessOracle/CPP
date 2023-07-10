/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:53:40 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/06 10:51:27 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->name << " was destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
