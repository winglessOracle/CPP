/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:14:55 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:38:23 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		const MateriaSource& operator=(const MateriaSource& rhs);
		~MateriaSource(void);


		AMateria*	createMateria(std::string const & type);
		void		learnMateria(AMateria* type);
		void		listMateria(void) const;

		AMateria* 	existingMateria[100];


	private:
		AMateria*	_knownMateria[4];
};

#endif
