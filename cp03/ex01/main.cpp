#include "ScavTrap.hpp"

int	main() {
	ClapTrap	first("first");
	ScavTrap	second("second");

	first.attack("second");
	second.guardGate();
	first.takeDamage(2);
	first.beRepaired(2);
}