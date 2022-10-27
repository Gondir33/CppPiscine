#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called\n";
}


FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.name_) {
	name_ = copy.name_;
	hit_points_ = copy.hit_points_;
	energy_points_ = copy.energy_points_;
	attack_damage_ = copy.attack_damage_;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	name_ = copy.name_;
	hit_points_ = copy.hit_points_;
	energy_points_ = copy.energy_points_;
	attack_damage_ = copy.attack_damage_;

	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "guy with name " << name_ << " request a positive high five\n";
}
