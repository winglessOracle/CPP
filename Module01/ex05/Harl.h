/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/09/07 10:48:03 by carlowessel   ########   odam.nl         */
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
