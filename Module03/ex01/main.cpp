/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:44:52 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 15:00:07 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "include/ScavTrap.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main(void) {
	{
		std::cout	<< CYAN <<	std::endl;

		ClapTrap 	terminator("T850");
		ScavTrap 	betterTerminator("T1000");
		ScavTrap	A;
		A			= betterTerminator;
			
		int			repair_HP = 20;

		std::cout	<< RESET << "\n-----------------------"	<<	std::endl;

		terminator.setAttackDamange(15);
		terminator.attack("T1000");
		betterTerminator.takeDamage(terminator.getAttackDamage());
		betterTerminator.beRepaired(repair_HP);
		betterTerminator.attack("T850");
		terminator.takeDamage(betterTerminator.getAttackDamage());
		betterTerminator.guardGate();

		std::cout	<< "-----------------------\n"	<<	CYAN << std::endl;
	}{
		std::cout	<< RESET << "\n-------new scope--------" << std::endl;
		ScavTrap 	betterTerminator("T1000");
		ScavTrap a = betterTerminator;
		std::cout	<<  std::endl;
		a.attack("the air");
		a.setEnergyPoints(0);
		betterTerminator.setHitPoints(0);
		a.guardGate();
		betterTerminator.guardGate();
		
		std::cout	<< "-----------------------"	<<	CYAN << "\n" << std::endl;
	}
	return 0;
}