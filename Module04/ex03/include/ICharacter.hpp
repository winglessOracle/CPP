/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:22:20 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:33:13 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <string>

class AMateria;

class ICharacter {

	public:
		virtual 					~ICharacter(void) {}
		
		virtual std::string const &	getName() const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;	
};

#endif
