#include "ClapTrap.hpp"

int	main() {
	ClapTrap first("first");
	ClapTrap second("second");

	first.attack("second");
	first.takeDamage(2);
	first.beRepaired(2);
}