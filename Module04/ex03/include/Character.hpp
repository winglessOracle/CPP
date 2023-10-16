/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:22:20 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:40:12 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

#include <string>
#include <iostream>

class AMateria;

class Character : public ICharacter {

	public:
		Character(void);
		Character(std::string name);
		Character(const Character& other);
		const Character& operator=(const Character& rhs);
		~Character(void);
		
		std::string const &	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);


	private:
		std::string			_name;
		AMateria*			_equipment[4];
};

#endif
