#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap	first("first");
	ScavTrap	second("second");
	FragTrap	third("third");

	third.highFivesGuys();
	first.attack("second");
	second.guardGate();
	first.takeDamage(2);
	first.beRepaired(2);
}