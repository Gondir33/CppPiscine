#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie
{
private:
	std::string	name;

public:

	void	announce( void );
	void	setName( std::string );
	
	Zombie();
	Zombie( std::string );
	~Zombie();
};

Zombie*	zombieHorde( int N, std::string name);

#endif