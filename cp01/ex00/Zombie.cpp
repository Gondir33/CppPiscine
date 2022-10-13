#include "Zombie.hpp"

Zombie::Zombie(std::string tmpname)
{
	this->name = tmpname;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}