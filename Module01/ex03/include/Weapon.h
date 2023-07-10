/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/09 14:21:33 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon {

	public:
		Weapon(void);
		Weapon(std::string typeName);
		~Weapon(void);

		const std::string	getType(void);
		void				setType(std::string typeName);

	private:
		std::string		type;
};
