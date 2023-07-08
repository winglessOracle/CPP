/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 12:18:52 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/07/06 08:43:16 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.h"
#include "Colors.h"
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>


class PhoneBook {

	public:  // where functions go

		PhoneBook();
		~PhoneBook();

		void	setSize();
		void	setNextIndex();
		void	addContact(std::string info[6]);
		void	displayPhoneBook();
		void	selectContact();
		void	displayContact(int i);

	private: // where variables go
		Contact		contacts[9];
		int			size;
		int			max_entry;
		int			nextIndex;
};
