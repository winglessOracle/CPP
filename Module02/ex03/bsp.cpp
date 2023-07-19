/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 12:58:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/14 13:03:21 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Point.h"


/*
std:ads id c++11 so buit own abs function to gget the ABS value of the surface are
the surface area can not be negative.
*/
Fixed	abs(Fixed f) {
	if (f < 0)
		return (f * -1);
	return f;
}


//Surface area triangle = ∣ x1∗(y2−y3) + x2 ∗ (y3−y1) + x3 ∗ (y1−y2) ∣ / 2
Fixed	area(const Point a, const Point b, const Point c) {
	return (abs(a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY()))) / 2;
}

/*
adding the three survaces created by the point and the different corners of the 
traingle and adding the together. If the point is in the triangle the added surface
should equal the total surface area of the triangle.
if any of the three surface areas is 0 the point is on an edge or vertice. */
bool	bsp(const Point a, const Point b, const Point c, const Point p) {
	Fixed	abcArea = area(a, b, c);
	Fixed	pbcArea = area(p, b, c);
	Fixed	pabArea = area(p, a, b);
	Fixed	pacArea = area(p, a, c);

//check if point is on an edge or corner point
	if (pbcArea == 0 || pabArea == 0 || pacArea == 0)
		return false;
// check if areas match
	if ((pbcArea + pabArea + pacArea) == abcArea)
		return true;
	return false;
}
