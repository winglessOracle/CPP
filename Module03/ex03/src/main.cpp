/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:44:52 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 15:00:23 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main(void) {
	{

		std::cout	<< "\n-----------------------"	<<	std::endl;
		
		ScavTrap 	betterTerminator("T1000");
		std::cout	<< CYAN <<	std::endl;
		DiamondTrap	blinky("Blinky");
		
		std::cout	<< RESET << "\n-----------------------"	<<	std::endl;
		
		blinky.whoAmI();
		blinky.highFivesGuys();
		blinky.guardGate();
		
		std::cout << "Blinky: hitpoints\t" << blinky._hitPoints << "\nBlinky: energy\t\t" << blinky._energyPoints << "\nBlinky: attack damage\t" << blinky._attackDamage << std::endl;
		
		std::cout	<< "---------------------------"	<<	std::endl;

		std::cout << CYAN <<"\nBlinky should have 50 Energy points from ScavTrap and 30 attack Damage from FragTrap.\nHis name is private and not accessable here so it should show its claptrap name" << RESET << std::endl;
		blinky.attack("T1000");
		betterTerminator.takeDamage(blinky.getAttackDamage());
		
		std::cout	<< "-------------------------\n"	<<	std::endl;

		std::cout << CYAN <<"Blinky should have hitpoints from FragTrap. it's name is still private." << RESET << std::endl;
		betterTerminator.attack("Blinky");
		blinky.takeDamage(betterTerminator.getAttackDamage());
	
	} {

		std::cout	<< "-------------------------\n"	<<	std::endl;
		std::cout << CYAN << "Test A is a copy of blinky" << RESET << std::endl;
		DiamondTrap blinky("Blinky");
		std::cout	<< std::endl;
		blinky.takeDamage(33);
		blinky.beRepaired(13);

		std::cout	<< CYAN <<	std::endl;
		DiamondTrap A(blinky);
		std::cout << RESET << "\nA: hitpoints\t\t" << A._hitPoints << "\nA: energy\t\t" << A._energyPoints << "\nA: attack damage\t" << A._attackDamage << "\n" << std::endl;
	
	} {
	
		std::cout	<< "-------------------------\n"	<<	std::endl;
		std::cout << CYAN << "Test B = Blinky" << RESET << std::endl;
		DiamondTrap blinky("Blinky");
		std::cout	<< std::endl;
		blinky.takeDamage(33);
		blinky.beRepaired(13);

		std::cout	<< CYAN <<	std::endl;
		DiamondTrap B;
		B = blinky;
		std::cout << RESET << "\nB: hitpoints\t\t" << B._hitPoints << "\nB: energy\t\t" << B._energyPoints << "\nB: attack damage\t" << B._attackDamage << "\n" << std::endl;
		
		blinky.setHitPoints(0);
		B.setEnergyPoints(0);
		blinky.attack("something");
		B.attack("something");
		
		std::cout	<< "-----------------------\n"	<< CYAN << std::endl;
	}
}
