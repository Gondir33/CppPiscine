#pragma once

#include "Fixed.hpp"

class Point
{
private:
	Fixed	x_;
	Fixed	y_;
public:

	void	setX( const Fixed& );
	Fixed	getX( void );
	void	setY( const Fixed& );
	Fixed	getY( void );

	Point( void );
	Point( const Fixed& , const Fixed& );
	Point( const Point& );
	Point&	operator=( const Point& );
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);