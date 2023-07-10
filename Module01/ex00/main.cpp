/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 20:04:45 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main() {
	std::cout << CYAN << "\ncreate two standard zombies first:" << RESET << std::endl;
	Zombie number1;
	number1.setName("Jane");
	number1.announce();
	
	Zombie number2;
	number2.setName("John");
	number2.announce();
	
	std::cout << CYAN << "\ncreating a new Zombie (heap):" << RESET << std::endl;
	Zombie *number3 = newZombie("Bill");
	number3->announce();

	std::cout << CYAN << "\ncreating a random Chump that goes out of scope (stack):" << RESET << std::endl;
	randomChump("Diana");

	std::cout << CYAN << "\nmanually removing the new zombie with destructor:" << RESET << std::endl;
	delete(number3);


	std::cout << CYAN << "\nend of programm: destructors called on first two zombies:" << RESET << std::endl;
}
