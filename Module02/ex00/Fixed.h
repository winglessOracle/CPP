/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/10 15:14:42 by cwesseli      #+#    #+#                 */
/*   Updated: 2023/07/19 19:28:22 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

	public:
		//default constructor
		Fixed();
		
		//destructor
		~Fixed();
		
		//copy constructor
		Fixed(const Fixed& rhs);

		//copy assignment operator overload
		const Fixed& operator=(const Fixed& rhs);

		// getter
		int	getRawBits(void) const;

		// setter
		void	setRawBits(int const raw);
		
	private:
		int					_fixedPointNumber;
		static const int	_fractionalBits = 8;

};


//future ref: include cstdint and change int to int32_t