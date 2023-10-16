/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/16 11:20:07 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <string>
#include <iostream>

class Dog : public AAnimal {

	public:
		Dog();
		Dog(const Dog &other);
		const Dog &operator=(const Dog & rhs);
		~Dog();

		void	makeSound(void) const;

		void	addIdea(std::string idea);
		void	listIdeas(void) const;
		Brain*	getBrainAddress(void);

	
	private:
		Brain *_brain;
};

#endif
