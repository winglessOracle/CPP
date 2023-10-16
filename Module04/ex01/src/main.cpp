/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:35 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:16:16 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int	main() {

	std::cout << GREEN << "\n========= Test as in assignment==\n"	<< RESET << std::endl;
	
	{
		Animal* catsanddogs[10];
		
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0)
				catsanddogs[i] = new Cat;
			else
				catsanddogs[i] = new Dog;
		}
		
		std::cout << "\nCheck if they are created correctly\n" << std::endl; 

		for (int i = 0; i < 10; i++) {
			std::cout << i << " is a  " <<  catsanddogs[i]->getType() << " "; 
			catsanddogs[i]->makeSound();
		}

		std::cout << "\ndelete them\n" << std::endl;

		for (int i = 0; i < 10; i++) {
			delete catsanddogs[i];
		}
	}

	std::cout << GREEN << "\n========= Test ideas==\n"	<< RESET << std::endl;
	{

		std::cout << GREEN << "\ndog_1 (stack) ideas:"	<< RESET << std::endl;

		Dog dog_1;
		std::cout << std::endl;
		dog_1.listIdeas();
		dog_1.addIdea("cat");
		dog_1.addIdea("chase");
		dog_1.listIdeas();

		std::cout << GREEN << "\ndog_2 (stack) ideas:"	<< RESET << std::endl;
		Dog dog_2(dog_1);
		std::cout << std::endl;
		dog_2.listIdeas();
		dog_2.addIdea("bone");
		dog_2.addIdea("serve");
		dog_2.listIdeas();

		std::cout << std::endl;

		Cat* cat_1 = new Cat;
		std::cout << GREEN << "\ncat_1 (heap) ideas and deep copy test:"	<< RESET << std::endl;
		cat_1->listIdeas();
		cat_1->addIdea("fish");
		cat_1->addIdea("sleep");
		cat_1->listIdeas();
		std::cout << "\ncat_1 brian address:" << GREEN << cat_1->getBrainAddress() << RESET << std::endl;

		
		Cat* cat_2 = new Cat; 
		cat_2->addIdea("belly rub");
		cat_2->addIdea("world domination");
		
		std::cout << GREEN << "\nDeep copy test"	<< RESET << std::endl;
		
		std::cout << "\ncat_2 ideas are:" << std::endl;
		cat_2->listIdeas();
		std::cout << "\ncat_2 brian address:" << GREEN << cat_2->getBrainAddress() << RESET << std::endl;
		
		*cat_2 = *cat_1;
		std::cout << "\n*cat_2 = *cat_1\ncat_2 ideas now are:" << std::endl;
		cat_2->listIdeas();
		std::cout << "\ncat_2 brian address:" << GREEN << cat_2->getBrainAddress() << RESET << std::endl;
		
		std::cout << std::endl;
		delete cat_1;
		delete cat_2;
		std::cout << std::endl;
	}

	std::cout << GREEN << "\n========= Check for leaks as in example ==\n"	<< RESET << std::endl;
	{
		const Animal* i = new Dog;
		const Animal* j = new Cat;

		delete j;
		delete i;
	}
	
	// std::cout << GREEN << "\n========= no more head space ====\n"	<< RESET << std::endl;
	// {
	// 	Cat* cat = new Cat;
	// 	for (int i = 0; i < 100; i++) {
	// 		cat->addIdea("fish please");
	// 	}
	// 	cat->listIdeas();
	// 	cat->addIdea("more fish please");
	// 	delete cat;
	// }
	
	std::cout << "\n"	<< std::endl;
	return (0);
}
