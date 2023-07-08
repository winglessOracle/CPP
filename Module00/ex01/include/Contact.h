/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 12:18:52 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/07/08 12:24:48 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Contact {
	public:  // where functions go
		Contact();
		~Contact();

		//getters
		int				getIndex();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickName();
		std::string		getNumber();
		std::string		getSecret();

		void	setIndex(int size);
		void	setContact(std::string info[5]);
		
		private: // where variables go
		int				index;
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		number;
		std::string		secret;
		
		//setters
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setNumber(std::string number);
		void	setSecret(std::string secret);	
		
}; //   <-------------semicolum to denote it is a class definition
