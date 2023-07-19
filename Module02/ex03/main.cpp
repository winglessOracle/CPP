/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:12 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/14 13:22:27 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

// void	leaks(void){
// 	std::cout << "\n------------" << std::endl;
// 	system("leaks point -q");
// }

/*
				a (20. 20)
			  /   \
			 /	   \
			/		\
		   /  		 \
		  b --------- c
	(0 . 0)				(0. 40)

*/


int		main(void) {
	Point 			a(20, 20);
	Point			b(0, 0);
	Point			c(0, 40);
	Point			point[] = {	Point(20, 20),
								Point(0, 0),
								Point(2, 1),
								Point(40, 40),
								Point(10, 10), 
								Point(100, 100), 
								Point(21, 19), 
								Point(10,20),
								Point(19, 20),
								Point(1, 30),
								Point(1, 2),
								};
	
	int arraySize = sizeof(point) / sizeof(point[0]);
	
	for (int i =0; i < arraySize; i++) {
		if (bsp (a, b, c, point[i]) == true)
			std::cout << GREEN << "Point is in the triagle" << RESET << std:: endl;
		else
			std::cout << RED << "Point is not in the triagle" << RESET << std:: endl;
	}
	// atexit(leaks);
	return (0);
}
