/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:48:12 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 11:29:46 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {

	public:
	
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		ScavTrap &operator=(ScavTrap const & rhs);
		~ScavTrap(void);
		
		void	attack(std::string const & target);
		void	guardGate(void);

	private:
	
};
