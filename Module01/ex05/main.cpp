/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 20:32:11 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

int	main() {
	
	Harl	harl;
	
	std::cout << CYAN << "\nRun all basic complaints once" << RESET << std:: endl;

	std::cout << CYAN << "\tpass 'debug'" << RESET << std:: endl;
	harl.complain("DEBUG");

	std::cout << CYAN << "\tpass 'info'" << RESET << std:: endl;
	harl.complain("INFO");

	std::cout << CYAN << "\tpass 'warning'" << RESET << std:: endl;
	harl.complain("WARNING");

	std::cout << CYAN << "\tpass 'error'" << RESET << std:: endl;
	harl.complain("ERROR");

	std::cout << CYAN << "Run an unknown complaint:\n\tpass 'something'" << RESET << std:: endl;
	harl.complain("SOMETHING");
		
	return (0);
}
