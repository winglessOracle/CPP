/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:14:51 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <cstdio>

Zombie	*zombieHorde(int N, std::string name);

int	main() {
	int nbZombies;
	std::cout << "How many zombies do you need? (2-100)" << std::endl;
	if (std::cin >> nbZombies) {
		if (nbZombies >= 2 && nbZombies <= 100) {
			std::cout << CYAN << "\nCreating a horde of " << nbZombies << " zombies" << RESET << std::endl;
			Zombie *myHorde = zombieHorde(nbZombies, "Bob");
			std::cout << "\nThat's enough zombies for now.\nPress a key..." << std::endl;
			std::cin.ignore();
			getchar();
			std::cout << CYAN << "Destroying the horde" << RESET << std::endl;
			delete[] myHorde;
		}
		else 
			std::cout << "\nSorry, that won't work\nNext time enter a value between 2 and 100" << std::endl;
	}
	
	else
		std::cout << "\nSorry, that won't work\nNext time enter a value between 2 and 100" << std::endl;
}

