/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:44:52 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/19 23:51:13 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main(void) {
	std::cout	<<"\n------------------"	<<	std::endl;

	ClapTrap Frogstar("Frogstar");
	ClapTrap Marvin("Marvin");
	ClapTrap A(Marvin);
	
	ClapTrap B;
	std::cout << "\nCalling getName function with B: " << B.getName() << std::endl;
	B = Frogstar;
	std::cout << "Calling getName function with B: " << B.getName() << std::endl;
		
	std::cout << "Testing ostream operator overload with 'Marvin': " << Marvin << std::endl;
	
	//------------------------------------------------------------------//
	int attackDamage 	= 0;
	int repairAmount	= 0;
	std::cout	<<	CYAN << "\n-------round 1------------"	<<	std::endl;
	std::cout	<<	"attack: "<< attackDamage << "\trepair: " << repairAmount << RESET << std::endl;
	Marvin.attack("Frogstar");
	Frogstar.takeDamage(Marvin.getAttackDamage());
	Frogstar.beRepaired(repairAmount);
	

	//------------------------------------------------------------------//
	attackDamage = 1;
	repairAmount = 2;
	Marvin.setAttackDamange(attackDamage);
	std::cout	<<	CYAN << "\n-------round 2------------"	<<	std::endl;
	std::cout	<<	"attack: "<< attackDamage << "\trepair: " << repairAmount << RESET << std::endl;
	
	Marvin.attack("Frogstar");
	Frogstar.takeDamage(Marvin.getAttackDamage());
	Frogstar.beRepaired(repairAmount);

	//------------------------------------------------------------------//
	attackDamage = 4;
	repairAmount = 0;
	Marvin.setAttackDamange(attackDamage);
	std::cout	<<	CYAN << "\n-------round 3------------"	<<	std::endl;
	std::cout	<<	"attack: "<< attackDamage << "\trepair: " << repairAmount << RESET << std::endl;
	
	Marvin.attack("Frogstar");
	Frogstar.takeDamage(Marvin.getAttackDamage());
	Frogstar.beRepaired(repairAmount);
	Marvin.attack("Frogstar");
	Frogstar.takeDamage(Marvin.getAttackDamage());
	Marvin.attack("Frogstar");
	Frogstar.takeDamage(Marvin.getAttackDamage());
	Frogstar.attack("Marvin");
	Frogstar.beRepaired(repairAmount);

	//------------------------------------------------------------------//
	attackDamage = 0;
	repairAmount = 0;
	Marvin.setAttackDamange(attackDamage);
	std::cout	<<	CYAN << "\n-------round 4------------"	<<	std::endl;
	std::cout	<<	"attack: "<< attackDamage << "\trepair: " << repairAmount << RESET << std::endl;
	Marvin.attack("Frogstar");
	Marvin.attack("Frogstar");
	Marvin.attack("Frogstar");
	Marvin.attack("Frogstar");
	Marvin.attack("Frogstar");
	Marvin.attack("Frogstar");
		
	std::cout	<<"\n------------------"	<<	std::endl;
	
	
}