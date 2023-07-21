/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/15 15:48:12 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/21 11:19:02 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.h"

class FragTrap : public ClapTrap {

	public:
	
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & other);
		FragTrap &operator=(const FragTrap& rhs);
		~FragTrap(void);
		
		void	attack(std::string const & target);
		void	highFivesGuys(void);
};
