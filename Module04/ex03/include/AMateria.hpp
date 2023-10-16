/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A_A_Animal.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 12:35:35 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/10/10 14:11:30 by carlo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMateria_H
# define AMateria_H

#include "ICharacter.hpp"

#include <string>
#include <iostream>

class AMateria {

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria & other);
		const 	AMateria& operator=(const AMateria & rhs);
		virtual ~AMateria(void);
		

		bool 				isEquiped(void) const;
		void 				toggleEquiped(void);
		std::string const & getType(void) const;

		virtual	AMateria* 	clone(void) const = 0;
		virtual	void 		use(ICharacter & target);


	protected:
		std::string 		type;
		bool 				equiped;
};

#endif
