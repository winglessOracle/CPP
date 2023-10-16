/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/16 10:47:22 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal {

	public:
		Animal(void);
		Animal(const Animal &other);
		const Animal& operator=(const Animal &rhs);
		virtual ~Animal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		type;
};

#endif
