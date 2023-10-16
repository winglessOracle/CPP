/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 12:18:52 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/09/07 10:24:19 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact::Contact() : index (0) {}

Contact::~Contact() {}


// accessors (get something, usually non void with no parameters)
int		Contact::getIndex() {
	return this->index;
}

std::string		Contact::getFirstName() {
	return this->firstName;
}

std::string		Contact::getLastName() {
	return this->lastName;
}

std::string		Contact::getNickName() {
	return this->nickName;
}

std::string		Contact::getSecret() {
	return this->secret;
}

std::string		Contact::getNumber() {
	return this->number;
}


// mutators (acces and change something. usually void with parameters)
void	Contact::setIndex(int nextIndex) {
	this->index = nextIndex;
}

void	Contact::setFirstName(std::string str) {
	this->firstName = str;
}

void	Contact::setLastName(std::string str) {
	this->lastName = str;
}

void	Contact::setNickName(std::string str) {
	this->nickName = str;
}

void	Contact::setSecret(std::string str) {
	this->secret = str;
}

void	Contact::setNumber(std::string str) {
	this->number = str;
}

void Contact::setContact(std::string info[5]) {
	setFirstName(info[0]);
	setLastName(info[1]);
	setNickName(info[2]);
	setNumber(info[3]);
	setSecret(info[4]);
}
