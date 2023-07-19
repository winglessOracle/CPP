/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:42 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/19 19:29:29 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

	public:
	
		Fixed();
		~Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& rhs);

		Fixed& operator=(const Fixed& rhs);
	
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

		// comparisson operators
		bool operator>(const Fixed& rhs)  const;
		bool operator<(const Fixed& rhs)  const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;
	
		//artithmatic operators
		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;
				
		//increment and decrement operators
		Fixed& operator++(void); //pre
		Fixed& operator--(void); //pre
		Fixed operator++(int); //post
		Fixed operator--(int); //post

		//min max overloaded functions
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
	private:
		int					_fixedPointNumber;
		static const  int	_fractionalBits = 8;

};

// overload function for the stream incertion (<<) operator.
//returns a ref to a modified outstream
std::ostream& operator<< (std::ostream& output, const Fixed& rhs);

//future ref: include cstsdint and change int to int32_t or unit32_t 