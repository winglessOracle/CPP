/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 12:18:52 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/07/06 12:40:58 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define CYAN    "\033[36m"

class Zombie {
	public:
		Zombie();
		~Zombie();

		void	setName(std::string name);
		void	announce(void);

	private:
		std::string	name;
	
};
