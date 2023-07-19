/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:42 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/19 19:28:50 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

	public:
		// default constructor
		Fixed();

		// destructor
		~Fixed();

		// int constructor
		Fixed(const int n);

		// float constructor
		Fixed(const float f);
		
		// copy constructor
		Fixed(const Fixed& rhs);

		// copy assignment operator overload
		Fixed& operator=(const Fixed& rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
		
	private:
		int					_fixedPointNumber;
		static const  int	_fractionalBits = 8;

};

// overload function for the stream incertion (<<) operator.
// returns a ref to a modified outstream
std::ostream& operator<< (std::ostream& output, const Fixed& rhs);


//future ref: include cstsdint and change int to int32_t or unit32_t 