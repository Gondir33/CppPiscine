#include "Zombie.hpp"

#define NUMZOMBIE 10

int	main()
{
	Zombie*	tmp = zombieHorde(NUMZOMBIE, "unduying");

	for (int i = 0; i < NUMZOMBIE; ++i){
		tmp[i].announce();
	}
}