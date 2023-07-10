/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 20:17:24 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "./include/Weapon.h"
#include "./include/HumanA.h"
#include "./include/HumanB.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main() {
	{
		//Create club instance of weapon
		Weapon	club("crude spiked club");

		//Create Human A with a weapon referance
		HumanA	bob("Bob", club);
		bob.attack();

		//Set a new weapon type
		club.setType("Gentelmens club");
		bob.attack();
	}
	
	std::cout << std::endl;
	
	{
		//Create club instance of weapon
		Weapon	club = Weapon("crude spiked club");

		//Create Human B without a weapon
		HumanB	jane("Jane");

		//"Set weapon to club (pointer)
		jane.setWeapon(&club);
		jane.attack();
		
		//"Set new weapon type
		club.setType("Ladys club");
		jane.attack();

		//"Set new weapon to null
		jane.setWeapon(NULL);
		jane.attack();
	}
}

