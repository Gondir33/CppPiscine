#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy.name_) {
	std::cout << "Copy ScavTrap constructor called\n";

	name_ = copy.name_;
	attack_damage_ = copy.attack_damage_;
	energy_points_ = copy.energy_points_;
	hit_points_ = copy.hit_points_;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & copy) {
	ClapTrap::operator=(copy);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap called\n";
}

void	ScavTrap::guardGate( void ) {
	std::cout << name_ << " now in the guard\n";
}