#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	std::cout << "DiamondTrap constructor called\n";
	name_ = name;
	hit_points_ = frag_hit_points_;
	energy_points_ = scav_energy_points_;
	attack_damage_ = frag_attack_damage_;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiaomondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) { }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
	ClapTrap::operator=(copy);
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "It is me DiamondTrap" << this->name_ << "!\n";
	std::cout << "hit points: " << hit_points_ << '\n';
	std::cout << "energy points: " << energy_points_ << '\n';
	std::cout << "attack damage: " << attack_damage_ << '\n';
}