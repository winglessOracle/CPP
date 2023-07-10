/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:37:31 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 14:40:56 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon *someWeapon);
	
	private: 
		std::string		_name;
		Weapon			*_weapon;
};