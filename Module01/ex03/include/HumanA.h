/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:36:29 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 14:39:49 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"

class HumanA {

	public:

		HumanA(std::string name, Weapon &someWeapon);
		~HumanA();

		void	attack(void);
	
	private: 
		std::string		_name;
		Weapon			&_weapon;
};
