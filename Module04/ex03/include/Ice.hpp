/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:04:14 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:29:51 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

#include <string>
#include <iostream>

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(const Ice & other);
		const Ice& operator=(const Ice & rhs);
		~Ice(void);


		AMateria*	clone(void)const;
		void		use(ICharacter & target);
};

#endif
