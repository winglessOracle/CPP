/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:35 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 11:25:50 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int	main() {
	std::cout << GREEN << "\n========= made Animal class virtual===\n"	<< RESET << std::endl;
	{
		Dog* i= new Dog();
		Cat* j = new Cat();
	//	AAnimal* k = new AAnimal(); //no longer works as Animal is abstract

		std::cout << std::endl;

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
	//	std::cout << k->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
	//	k->makeSound();

		std::cout << std::endl;

		delete i;
		delete j;
	//	delete k;
	}
	std::cout << "\n"	<< std::endl;
	return (0);
}
