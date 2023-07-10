/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHoard.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 11:10:05 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 20:07:15 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name) {
	
	if (N < 1 )
		return (NULL);
	
	int i = 0;
	int	arraySize = N;
	Zombie *horde = new Zombie[arraySize];
	
	while (i < arraySize) {
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	return (horde);
}
