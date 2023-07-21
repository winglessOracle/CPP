/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:48:12 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:39:42 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {

	public:
	
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		
		void				attack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		
		void				setAttackDamange(int amount);
		void				setEnergyPoints(int amount);
		void				setHitPoints(int amount);
		int					getAttackDamage(void);
		std::string	const & getName(void) const;

	protected:
		std::string			_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
		int					_maxHP;
};

std::ostream	&operator<<(std::ostream & newOstream, const ClapTrap &myTrap);
