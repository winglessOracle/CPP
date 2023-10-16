/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/16 11:18:27 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <string>
#include <iostream>

class Cat : public AAnimal {

	public:
		Cat(void);
		Cat(const Cat &other);
		const Cat &operator=(const Cat &rhs);
		~Cat(void);

		void	makeSound(void) const;

		void	addIdea(std::string idea);
		void	listIdeas(void) const;
		Brain*	getBrainAddress(void);

	
	private:
		Brain *_brain;
};

#endif
