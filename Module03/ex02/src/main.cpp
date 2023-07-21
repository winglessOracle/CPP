/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:44:52 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 15:00:18 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ScavTrap.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main(void) {
	{
		std::cout	<< CYAN <<	std::endl;

		ScavTrap 	betterTerminator("T1000");
		FragTrap	robby("Robby");
		FragTrap	B(robby);
		FragTrap	A;
		A 			= robby;
		
		int			repair_HP = 20;

		std::cout	<< RESET << "\n------------------"	<<	std::endl;
		betterTerminator.guardGate();
		robby.highFivesGuys();
		betterTerminator.attack("Robby");
		robby.takeDamage(betterTerminator.getAttackDamage());
		
		std::cout	<< CYAN << "\n--------different robbys attack--------------" <<	RESET << std::endl;
		robby.attack("T850");
		betterTerminator.takeDamage(robby.getAttackDamage());
		
		A.attack("T850");
		betterTerminator.takeDamage(A.getAttackDamage());
		
		B.attack("T850");
		betterTerminator.takeDamage(B.getAttackDamage());
		std::cout	<< CYAN << "\n--------full repair-------------------------" << RESET << std::endl;
		
		betterTerminator.attack("Robby");
		robby.takeDamage(betterTerminator.getAttackDamage());
		robby.beRepaired(repair_HP);
		robby.beRepaired(repair_HP);
		robby.beRepaired(repair_HP);

		std::cout	<< "---new scope----------"	<< CYAN <<	"\n" << std::endl;
	}
	{
		std::cout	<< RESET <<	"\n" << std::endl;
		ScavTrap 	A("T1000");
		ScavTrap 	B("T1000");
		A.setHitPoints(0);
		B.setEnergyPoints(0);
		A.attack("something");
		B.attack("something");
		
		std::cout << "-------------------" << CYAN <<	"\n" << std::endl; 
	}
}
