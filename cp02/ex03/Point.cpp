#include "Point.hpp"

Point::Point() : x_(0) , y_(0) { }

Point::Point(const Fixed& x, const Fixed& y) : x_(x) , y_(y) { }

Point::Point(const Point& point) : x_(point.x_) { }

void	Point::setX( const Fixed& x ) {
	x_ = x;
}

Fixed	Point::getX( void ) {
	return x_;
}

void	Point::setY( const Fixed& y ) {
	y_ = y;
}

Fixed	Point::getY( void ) {
	return y_;
}

