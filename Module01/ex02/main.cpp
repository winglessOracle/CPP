/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/06 12:27:26 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The memory address of the string variable:\t";
	std::cout << &str << std::endl;

 	std::cout << "The memory address by stringPTR:\t\t";
	std::cout << stringPTR << std::endl;

	std::cout << "The memory address held by stringREF:\t\t";
	std::cout << &stringREF << std::endl;

	std::cout << "The value of the string variable:\t\t";
	std::cout << str << std::endl;

	std::cout << "The value pointed to by stringPTR:\t\t";
	std::cout << *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF:\t\t";
	std::cout << stringREF << std::endl;
}
