#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
int	main() {
	DiamondTrap	trap("DiamondTrap");

	std::cout << std::endl;
	trap.whoAmI();
	std::cout << std::endl;
	trap.attack("second");
	std::cout << std::endl;
	trap.whoAmI();
	std::cout << std::endl;
}