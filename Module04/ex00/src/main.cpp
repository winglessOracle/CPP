/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:35 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 10:45:55 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int	main() {
	{
		std::cout << GREEN << "\n=========Base class animal stack tests========\n"	<< RESET << std::endl;

		Animal	animal_1;
		animal_1.makeSound();
		std::cout << "type = " << animal_1.getType() << std::endl;
		
		std::cout << "\n"	<< std::endl;

		Animal	animal_2(animal_1);
		animal_2.makeSound();
		std::cout << "type = " << animal_2.getType() << std::endl;

		std::cout << "\n"	<< std::endl;

		Animal	animal_3;
		animal_3 = animal_1;
	
		std::cout << "\nThree stack animals created that should automatically call the destructor:"	<< std::endl;
	}

	std::cout << GREEN << "\n=========Base class animal heap tests========\n"	<< RESET << std::endl;
	{	
		Animal *animal_1 = new Animal;
		animal_1->makeSound();
		std::cout << "type = " << animal_1->getType() << std::endl;
		delete animal_1;

		std::cout << "\ncopying allocated animals:\n"	<< std::endl;

		Animal *animal_2 = new Animal;
		Animal *animal_3 = new Animal;
		*animal_3 = *animal_2;
	

		std::cout << "\nDeleting two animals:"	<< std::endl;
		delete animal_2;
		delete animal_3;
	}
	
	std::cout << GREEN << "\n=========Derived classes stack tests========\n"	<< RESET << std::endl;
	{
		Cat	cat_1;
		cat_1.makeSound();
		std::cout << "type = " << cat_1.getType() << std::endl;
		
		std::cout << "\n"	<< std::endl;

		Dog	dog_1;
		dog_1.makeSound();
		std::cout  <<  "type = " << dog_1.getType() << std::endl;

		std::cout << "\ncopy assignment:\n"	<< std::endl;

		Cat cat_2;
		Cat	cat_3;
		cat_3 = cat_2;
		std::cout << "\n1 dog and tree cats on the stack. Expect 4x animal destructor:"	<< std::endl;
	}
	
	std::cout << GREEN << "\n=========Derived classes heap tests========\n"	<< RESET << std::endl;
	{
		Cat *cat_1 = new Cat;
		cat_1->makeSound();
		Dog *dog_1 = new Dog;
		dog_1->makeSound();

		std::cout << "\n"	<< std::endl;

		Cat *cat_2 = new Cat;
		*cat_2 = *cat_1; //dont forget to derefrence
		cat_2->makeSound();

		std::cout << "\nDeleting tree animals (2xcat, 1xdog):"	<< std::endl;
		delete cat_1;
		delete cat_2;
		delete dog_1;
	}

	{
		std::cout << GREEN << "\n=========Wrong Animal====================\n"	<< RESET << std::endl;
		std::cout << GREEN << "\n=========Normal output as in example==\n"	<< RESET << std::endl;
		{
			const Animal* meta = new Animal();
			const Animal* i= new Dog();
			const Animal* j = new Cat();

			std::cout << i->getType() << " " << std::endl;
			std::cout << j->getType() << " " << std::endl;
		
			std::cout << std::endl;
			meta->makeSound();
			i->makeSound();
			j->makeSound();
			std::cout << std::endl;

			delete meta;
			delete i;
			delete j;
		}
		
		std::cout << GREEN << "\n=========Wrong Animals====================\n"	<< RESET << std::endl;
		std::cout << GREEN << "\n Removed key word virtual before make sound\n"	<< RESET << std::endl;
		{
			const WrongAnimal* meta = new WrongAnimal();
			const Animal* i= new Dog();
			const WrongAnimal* j = new WrongCat();

			std::cout << i->getType() << " " << std::endl;
			std::cout << j->getType() << " " << std::endl;
			
			std::cout << std::endl;
			meta->makeSound();
			i->makeSound();
			j->makeSound();
			std::cout << std::endl;
			
			delete meta;
			delete i;
			delete j;
		}

	}
	std::cout << "\n"	<< std::endl;
	return (0);
}
