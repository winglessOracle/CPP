/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlo <carlo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 10:20:01 by carlo         #+#    #+#                 */
/*   Updated: 2023/10/16 10:30:15 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain {
	
	public:
		Brain(void);
		Brain(const Brain & other);
		const Brain &operator=(const Brain & rhs);
		virtual ~Brain(void);

		std::string ideas[100];
};

#endif