/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/16 10:44:24 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

#include <string>
#include <iostream>

class Dog : public Animal {

	public:
		Dog(void);
		Dog(const Dog &other);
		const Dog &operator=(const Dog & rhs);
		~Dog(void);

		void	makeSound(void) const;
};

#endif
