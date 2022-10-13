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
	Fixed&	operator=(const Fixed&);
	Fixed( const Fixed& );
	Fixed();
	Fixed( const int );
	Fixed( const float );
	~Fixed();
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);