/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 21:00:35 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

#define RESET   "\033[0m"
#define CYAN    "\033[36m"

void	capitalize(std::string &str) {
	int	i = 0;
	while (str[i]) {
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int	getIndex(std::string arg) {
	
	std::string array[]={"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (arg.compare(array[i]) == 0) {
			return (i);
		}
	}
	std::cout << "[Probably complaining about random stuf]" << std::endl;
	return 4;
}

int	main(int argc, char **argv) {
	
	if (argc != 2) {
		std::cout << "Invalid parameter count. Pass one argument" << std::endl;
		return (0); 
	}
	
	Harl			harl;
	std::string		arg = (argv[1]);
	int				index;
	
	capitalize(arg);
	index = getIndex(arg);
	
	switch (index) {
		case 0:
			harl.complain("DEBUG");
			goto case_1;
		case_1:
		case 1:
			harl.complain("INFO");
			goto case_2;
		case_2:
		case 2:
			harl.complain("WARNING");
			goto case_3;
		case_3:
		case 3:
			harl.complain("ERROR");
	}
	return (0);
}
