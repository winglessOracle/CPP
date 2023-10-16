/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/16 10:28:59 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

#include <string>
#include <iostream>

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		const WrongCat &operator=(const WrongCat &rhs);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
