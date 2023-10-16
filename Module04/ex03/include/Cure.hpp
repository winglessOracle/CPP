/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:03:44 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:28:55 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

#include <string>
#include <iostream>

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(const Cure & other);
		const Cure& operator=(const Cure & rhs);
		~Cure(void);


		AMateria*	clone(void)const;
		void		use(ICharacter & target);

};

#endif

