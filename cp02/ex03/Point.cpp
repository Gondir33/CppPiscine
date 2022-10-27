#include "Point.hpp"

Point::Point() : x_(0) , y_(0) { }

Point::Point(const Fixed& x, const Fixed& y) : x_(x) , y_(y) { }

Point::Point(const Point& point) : x_(point.x_), y_(point.y_) { }



