#include "Fixed.hpp"

int		Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called\n";
	return raw_;
}
void	Fixed::setRawBits( int const raw) {
	// std::cout << "setRawBits member function called\n";
	raw_ = raw;
}

float	Fixed::toFloat( void ) const {
	return raw_ / std::pow(2, fracBits_);
}

int		Fixed::toInt( void ) const {
	return roundf(raw_ / std::pow(2, fracBits_));
}

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	raw_ = 0;
}

Fixed::Fixed(const int raw) {
	std::cout << "Int constructor called\n";
	raw_ = raw * std::pow(2, fracBits_);
}

Fixed::Fixed(const float raw) {
	std::cout << "Float constructor called\n";
	raw_ = raw * std::pow(2, fracBits_);
}

Fixed::Fixed( const Fixed& fixed) {
	std::cout << "Copy constructor called\n";
	raw_ = fixed.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	
	std::cout << "Copy assignment operator called\n";

	this->raw_ = fixed.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed) {
	return out << fixed.toFloat();
}