/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:56:15 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 20:03:49 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*newZombie(std::string name) {
	Zombie *newZombie = new Zombie();
	newZombie->setName(name);
	return (newZombie);
}
