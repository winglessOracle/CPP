/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:56:50 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 13:49:08 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump(std::string name) {
	Zombie		randomChump;
	randomChump.setName(name);
	randomChump.announce();
}
