#include "Fixed.hpp"

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return raw_;
}
void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called\n";
	raw_ = raw;
}


Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	raw_ = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const Fixed& fixed) {
	std::cout << "Copy constructor called\n";
	raw_ = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	
	std::cout << "Copy assignment operator called\n";

	this->raw_ = fixed.getRawBits();
	return *this;
}
