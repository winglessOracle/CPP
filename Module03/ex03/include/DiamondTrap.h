/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:48:12 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 14:25:25 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.h"
#include "FragTrap.h"


//using will make sure DiamondTrap knows which values to fetch from which base class. However 
// all derived memders will be overridden by the last called class so the energypoints of scavtrap are overidden.
class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		using ScavTrap::_energyPoints;
		using ScavTrap::attack;
		
		using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		using FragTrap::_maxHP;
	
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & rhs);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);	

		void whoAmI(void);
			
	private:
	
		std::string	_name;
};
