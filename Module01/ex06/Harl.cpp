/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 11:21:26 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/10 20:34:53 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
	
Harl::Harl()	{}
Harl::~Harl()	{}

void	Harl::complain(std::string level) {
	
	void (Harl::*complaintLevel)(void) = NULL;

	struct functionPair {
		std::string	name;
		void (Harl::*ptr)(void);
	};

	functionPair functionTable[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};
	
	int size = sizeof(functionTable) / sizeof(functionTable[0]);
	for (int i = 0; i < size ; i++) {
		if (functionTable[i].name.compare(level) == 0) {
			complaintLevel = functionTable[i].ptr;
			break ;
		}
	}
	
	if (complaintLevel != NULL)
		(this->*complaintLevel)();
}

void	Harl::debug(void) {
	std::cout << "DEBUG: I love having extra cheese for my 7XL-double-cheese-triple-pickle-special-vegen burger. I really do!\n" << std::endl;
}

void	Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra cheese costs more money. You didn’t put enough bacon in my burger! If you did, I would not be asking for more!\n" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra cheese for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}