#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:

	std::string	type;

public:

	void		setType( std::string );
	std::string	getType( );

	Weapon();
	Weapon( std::string );
	~Weapon();
};


#endif