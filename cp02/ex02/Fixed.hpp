#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int	raw_;
	static const int fracBits_ = 8;

public:

	int		getRawBits( void ) const;
	void	setRawBits( int const );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed const&	max( const Fixed& lhs, const Fixed& rhs );
	static Fixed&		max( Fixed& lhs, Fixed& rhs );
	static Fixed const&	min( const Fixed& lhs, const Fixed& rhs );
	static Fixed&		min( Fixed& lhs, Fixed& rhs );

	Fixed&	operator=( const Fixed& );
	Fixed&	operator+=( const Fixed& );
	Fixed&	operator-=( const Fixed& );
	Fixed&	operator/=( const Fixed& );
	Fixed&	operator*=( const Fixed& );

	Fixed&	operator++();
	Fixed	operator++( int );
	Fixed&	operator--();
	Fixed	operator--( int );

	Fixed	operator+( const Fixed& fixed );
	Fixed	operator-( const Fixed& fixed );
	Fixed	operator*( const Fixed& fixed );
	Fixed	operator/( const Fixed& fixed );

	Fixed( const Fixed& );
	Fixed( void );
	Fixed( const int );
	Fixed( const float );
	~Fixed( );
};



std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

bool	operator>(const Fixed& left, const Fixed& right);
bool	operator<(const Fixed& left, const Fixed& right);
bool	operator>=(const Fixed& left, const Fixed& right);
bool	operator<=(const Fixed& left, const Fixed& right);
bool	operator==(const Fixed& left, const Fixed& right);
bool	operator!=(const Fixed& left, const Fixed& right);
