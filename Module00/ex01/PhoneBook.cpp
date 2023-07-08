/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 12:18:52 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/07/08 12:58:38 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook() : size (0), max_entry (8), nextIndex (0) {}

PhoneBook::~PhoneBook() {}


void	PhoneBook::addContact(std::string info[5]) {
	
	Contact		newContact;
	
	setSize();
	setNextIndex();
	newContact.setIndex(this->nextIndex);
	newContact.setContact(info);
	this->contacts[this->nextIndex] = newContact;
	std::cout << GREEN << "\n================= CONTACT ADDED TO YOUR PHONEBOOK ================" << RESET << std::endl;
	std::cout << GREEN << "===================== YOU HAVE " << size << " CONTACT(S) ======================\n" << RESET << std::endl;
}

void	PhoneBook::setSize() {
	if (this->size < this->max_entry)
		this->size++;
}

void	PhoneBook::setNextIndex() {
	if (this->nextIndex < this->max_entry)
		this->nextIndex++;
	else
		this->nextIndex = 1;
}

void	PhoneBook::displayContact(int i) {
		std::cout << CYAN << "\n============= CONTACTS DETAILS =================" << RESET << std::endl;
		std::cout << "\tIndex:\t\t" << contacts[i].getIndex() << std::endl;
		std::cout << "\tFirst name:\t" << contacts[i].getFirstName()<< std::endl;
		std::cout << "\tLast name:\t" << contacts[i].getLastName() << std::endl;
		std::cout << "\tNickname:\t" << contacts[i].getNickName() << std::endl;
		std::cout << "\tPhone number:\t" << contacts[i].getNumber() << std::endl;
		std::cout << "\tDarkest secret:\t" << contacts[i].getSecret() << std::endl;
		std::cout << CYAN << "================================================\n\n" << RESET << std::endl;
}

void	PhoneBook::displayPhoneBook() {
	int	i = 1;
	
	if (this->size == 0) {
		std::cout << CYAN << "\n=========== I'm sorry but you do not have any contacts...===========\n================ Try to 'ADD' a few contacts first =================\n" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "\n============= CONTACTS OVERVIEW ================\n" << RESET << std::endl;
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << "|" <<std::endl;
	
	while (i < this->size + 1) {
		std::cout << std::setw(10) << std::right << contacts[i].getIndex() << "|";
		std::cout << std::setw(10) << std::right << contacts[i].getFirstName().substr(0, 10) << "|";
		std::cout << std::setw(10) << std::right << contacts[i].getLastName().substr(0, 10) << "|";
		std::cout << std::setw(10) << std::right << contacts[i].getNickName().substr(0, 10) << "|" << std::endl;
		i++;
	}
	std::cout << YELLOW << "\n================================================\n" << RESET << std::endl;
	selectContact();
}

void	PhoneBook::selectContact() {

	char input;
	int num = 0;
	
	while (true) {
		std::cout << "\tWHICH CONTACT WOULD YOU LIKE TO SELECT?" << std::endl;
		std::cout << "\tENTER AN INDEX NUMBER\n"<< std::endl;
		
		if (std::cin >> input) {
			if (std::isdigit(input)) {
				num = input - '0';
				if (num >= 1 && num <= this->size)
					break;
			}
		}
		std::cin.ignore();
		std::cout << CYAN << "\n==== You did not enter a valid index number ====\n================ Try again =====================\n" << RESET << std::endl;
	}
	displayContact(num);
}
