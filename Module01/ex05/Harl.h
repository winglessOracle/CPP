/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/10 14:17:16 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

								 