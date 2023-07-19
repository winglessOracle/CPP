/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 12:31:15 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/14 12:50:28 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.h"
#include <iostream>

class Point {

	public:
		Point();
		~Point();
		Point(float const a, float const b);
		Point(const Point &rhs);
		Point& operator=(const Point &rhs);

		Fixed getX(void) const ;
		Fixed getY(void) const ;

	private:
		Fixed const _x;
		Fixed const _y;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);
