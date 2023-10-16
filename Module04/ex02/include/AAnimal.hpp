/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/10 14:11:30 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_H
# define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal {

	public:
		AAnimal(void);
		AAnimal(const AAnimal &other);
		const AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal(void); 

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string		type;
};

#endif

		/*added =0 to make this a pure function. 
		This forced derived functions to make an own version of this function. 
		As such this function in abstract and non-instinatable */