/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/10 10:14:58 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		const WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);

		std::string		getType(void) const;
		void			makeSound(void) const; // changed to non virtual (wrong)

	protected:
		std::string		type;
};

#endif
