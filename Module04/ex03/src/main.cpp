/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:35 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 12:28:38 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"


int	main() {
	{
		std::cout << GREEN << "\n========= Test as in assignment=======\n"	<< RESET << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character;

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);


		ICharacter* Bob = new Character("Bob");

		me->use(0, *Bob);
		me->use(1, *Bob);

		delete Bob;
		delete me;
		delete src;

	}
	
	{
		std::cout << GREEN << "\n========= More tests: learning from nothing =======\n"	<< RESET << std::endl;

	 	IMateriaSource* src = new MateriaSource();
		AMateria* empty = NULL;
		src->learnMateria(empty);
	
		delete src;
	}
	

	{
		std::cout << GREEN << "\n========= More tests: creating from nothing =======\n"	<< RESET << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		
		ICharacter* me = new Character;
		ICharacter* Bob = new Character("Bob");
		
		me->equip(src->createMateria("cure"));
		me->use(0, *Bob);

		src->createMateria("something unknown");

		delete Bob;
		delete me;
		delete src;
	}

	{
		std::cout << GREEN << "\n========= More tests: learn and equip too much =======\n"	<< RESET << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		
		ICharacter* me = new Character;

		me->equip(src->createMateria("cure"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));

		delete me;
		delete src;
	}

	{
		std::cout << GREEN << "\n========= More tests: swap materia =======\n"	<< RESET << std::endl;
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* Bert = new Character("Bert");
		ICharacter* Bob = new Character("Bob");

		Bert->equip(src->createMateria("ice"));
		Bert->equip(src->createMateria("cure"));
		Bob->equip(src->createMateria("cure"));

		std::cout << std::endl;


		Bert->use(0, *Bob);
		Bob->use(0, *Bert);

		std::cout << std::endl;
		src->listMateria();
		std::cout << std::endl;

		Bert->equip(src->existingMateria[0]); // already equiped
		Bob->equip(src->existingMateria[1]); // already equiped
		Bert->unequip(0);
	
		Bert->equip(src->existingMateria[0]); // free (ice)
				
		std::cout << std::endl;

		Bert->use(0, *Bob); // ice
		Bert->use(1, *Bob); // cure
		Bob->use(0, *Bert); // cure
		Bob->use(1, *Bert); // empty

		delete Bob;
		delete Bert;
		delete src;
		std::cout << GREEN << "\n=================================\n"	<< RESET << std::endl;
	}

	// {
	// 	std::cout << GREEN << "\n========= More tests: create 100+ materia =======\n"	<< RESET << std::endl;

	// 	MateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	for (int i = 0; i < 101; i++) {
	// 		src->createMateria("ice");
	// 	}
	// 	src->listMateria();
	// 	delete src;
	// }
	
	return (0);
}


/* interface is a template with only pure virtual 
	functions that obligates any class that implemets that interface to have an override for
	those virtual functions. 

	An Abstract class can have both virtual and concrete functions. 
	Derived classes must provide implementations of the virtual functions
*/
