#include "Zombie.hpp"

int	main()
{
	Zombie *tmp = newZombie("Fooo");
	tmp->announce();
	delete	tmp;
	randomChump("unduying");

}