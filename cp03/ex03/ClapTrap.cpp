#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const ClapTrap& copy ) {
	std::cout << "Copy ClapTrap constructor called\n";

	name_ = copy.name_;
	attack_damage_ = copy.attack_damage_;
	energy_points_ = copy.energy_points_;
	hit_points_ = copy.hit_points_;
}

ClapTrap& ClapTrap::operator=( const ClapTrap&  copy ) {
	std::cout << "Copy assignment operator called\n";

	name_ = copy.name_;
	attack_damage_ = copy.attack_damage_;
	energy_points_ = copy.energy_points_;
	hit_points_ = copy.hit_points_;

	return *this;
}

ClapTrap::ClapTrap(const std::string& name)
: name_(name) 
, hit_points_(10)
, energy_points_(10)
, attack_damage_(0) {
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor was here\n";
}

void	ClapTrap::takeDamage( unsigned int	amount ) {
	hit_points_ -= amount;
	std::cout << "takeDamage this guy " << name_ << "\n";
}
void	ClapTrap::beRepaired( unsigned int	amount ) {
	if (energy_points_ == 0) {
		std::cout << "no energy to repair\n";
		return ;
	}
	hit_points_ += amount;
	--energy_points_;
	std::cout << "beRepaired this guy " << name_ << "\n";
}

void	ClapTrap::attack(const std::string& target) {
	if (energy_points_ == 0) {
		std::cout << "no energy to attack\n";
		return ;
	}
	--energy_points_;
	
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!\n";
}
