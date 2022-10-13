#pragma once

#include <iostream>

class Fixed
{
private:

	int	raw_;
	static const int fracBits_ = 8;

public:

	int		getRawBits( void ) const;
	void	setRawBits( int const );
	Fixed& operator=(const Fixed&);
	Fixed( const Fixed& );
	Fixed();
	~Fixed();

};
