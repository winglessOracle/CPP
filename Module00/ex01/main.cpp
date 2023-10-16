/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 09:20:06 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/10/13 16:35:28 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

bool check_empty_fields(std::string info[6]) {
	int	i = 0;
	while (i < 5) {
		if (info[i].empty())
			return (true);
		i++;
	}
	return (false);
}

int main() {
	
	PhoneBook		phonebook;
	std::string		info[6];
	std::string		input;
	int				i;
	
	std::cout << YELLOW << "\n\n================== WELCOME TO YOUR PHONEBOOK ======================\n" << RESET << std::endl;

	while (1) {
		std::cout << "\tPlease enter one of the following commands:\n" << std::endl;
		std::cout << YELLOW << "\t\tADD:" << RESET << " to add a contact" << std::endl;
		std::cout << YELLOW << "\t\tSEARCH:" << RESET << " to find a contact" << std::endl;
		std::cout << YELLOW << "\t\tEXIT:" <<RESET << " to leave your phone book\n" << std::endl;
		std::cout << "\tWhat would you like to do?\n\n" << std::endl;
		std::getline(std::cin, input);
		
		if (std::cin.eof()) {
			std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
			break;
		}
		
		if (input == "ADD" || input == "add") {
			std::cout << YELLOW << "\n================= ADDING A NEW CONTACT ==========================\n" << RESET << std::endl;
			i = 0;
			
			std::cout << "\nEnter a first name: " <<std::endl;
			if (!std::getline(std::cin, info[i++])){
				std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
				break;
			}
			
			std::cout << "\nEnter a last name: " <<std::endl;
			if(!std::getline(std::cin, info[i++])) {
				std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
				break;
			}

			std::cout << "\nEnter a nickname: " <<std::endl;
			if(!std::getline(std::cin, info[i++])) {
				std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
				break;
			}

			std::cout << "\nEnter a phone number: " <<std::endl;
			if(!std::getline(std::cin, info[i++])) {
				std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
				break;
			}

			std::cout << "\nWhat this persons darkest secret?" <<std::endl;
			if(!std::getline(std::cin, info[i++])) {
				std::cout << "\tEOF encountered. Exiting program\n\n" << std::endl;
				break;
			}

			if (!check_empty_fields(info)) {
				info[i] = '\0';
				phonebook.addContact(info);
			}
			else
				std::cout << RED << "\n\n======== EMPTY FIELDS DETECTED PLEASE TRY AGAIN ===========\n" << RESET << std::endl;
		}
		else if (input == "SEARCH" || input == "search") {
			phonebook.displayPhoneBook();
		}
		else if (input == "EXIT" || input == "exit") {
			std::cout << YELLOW << "\n\n================== LEAVING YOUR PHONE BOOK =======================\n\n" << RESET << std::endl;
			break;
		}
		else 
			std::cout << CYAN << "\n\n======== INVALID INPUT PLEASE TRY AGAIN ===========\n" << RESET << std::endl;
	}
	return (0);
}
