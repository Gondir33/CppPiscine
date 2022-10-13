#include "Fixed.hpp"

int		Fixed::getRawBits( void ) const{
	return raw_;
}
void	Fixed::setRawBits( int const raw) {
	raw_ = raw;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(raw_) / (1 << fracBits_);
}

int		Fixed::toInt( void ) const {
	return roundf(raw_ >> fracBits_);
}

Fixed const&	Fixed::max( const Fixed& lhs, const Fixed& rhs ) {
	return lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs;
}

Fixed&			Fixed::max( Fixed& lhs, Fixed& rhs ) {
	return lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs;
}

Fixed const&	Fixed::min( const Fixed& lhs, const Fixed& rhs ) {
	return lhs.getRawBits() < rhs.getRawBits() ? lhs : rhs;
}

Fixed&			Fixed::min( Fixed& lhs, Fixed& rhs ) {
	return lhs.getRawBits() < rhs.getRawBits() ? lhs : rhs;
}




Fixed::Fixed() {
	raw_ = 0;
}

Fixed::Fixed(const int raw) {
	raw_ = raw << fracBits_;
}

Fixed::Fixed(const float raw) {
	raw_ = roundf(raw * (1 << fracBits_));
}

Fixed::Fixed( const Fixed& fixed) {
	raw_ = fixed.getRawBits();
}

Fixed::~Fixed() {
}




Fixed& Fixed::operator=(const Fixed& fixed) {
	if (this == &fixed)
		return *this;

	this->raw_ = fixed.getRawBits();
	return *this;
}

Fixed&	Fixed::operator+=( const Fixed& fixed) {
	raw_ += fixed.raw_;
	return *this;
}

Fixed&	Fixed::operator-=( const Fixed& fixed) {
	raw_ -= fixed.raw_;
	return *this;
}

Fixed&	Fixed::operator/=( const Fixed& fixed) {
	raw_ = raw_ << fracBits_;
	raw_ /= fixed.raw_;
	return *this;
}

Fixed&	Fixed::operator*=( const Fixed& fixed) {
	raw_ *= fixed.raw_;
	raw_ = raw_ >> fracBits_;
	return *this;
}

Fixed	Fixed::operator+(  const Fixed& fixed) {
	Fixed copy = *this;
	copy += fixed;
	return copy;
}

Fixed	Fixed::operator-(  const Fixed& fixed) {
	Fixed copy = *this;
	copy -= fixed;
	return copy;
}

Fixed	Fixed::operator*(  const Fixed& fixed) {
	Fixed copy = *this;
	copy *= fixed; 
	return copy;
}

Fixed	Fixed::operator/(  const Fixed& fixed) {
	Fixed copy = *this;
	copy /= fixed;
	return copy;
}




Fixed&	Fixed::operator++() {
	raw_ += 1;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	newFixed = *this;
	operator++();
	return newFixed;
}

Fixed&	Fixed::operator--() {
	raw_ -= 1;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed	newFixed = *this;
	operator--();
	return newFixed;
}




std::ostream&	operator<<(std::ostream& out, const Fixed& fixed) {
	return out << fixed.toFloat();
}

bool	operator>(const Fixed& left, const Fixed& right) {
	return left.getRawBits() > right.getRawBits();
}
bool	operator<(const Fixed& left, const Fixed& right) {
	return left.getRawBits() < right.getRawBits();
}
bool	operator>=(const Fixed& left, const Fixed& right) {
	return !(left < right);
}
bool	operator<=(const Fixed& left, const Fixed& right) {
	return !(right > left);
}
bool	operator==(const Fixed& left, const Fixed& right) {
	return right.getRawBits() == left.getRawBits();
}
bool	operator!=(const Fixed& left, const Fixed& right) {
	return !(left == right);
}