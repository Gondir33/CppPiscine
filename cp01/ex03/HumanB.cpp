#include "HumanB.hpp"


HumanB::HumanB(std:: string nam) : name_(nam) {}

void	HumanB::attack()
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weap ) {
	weapon_ = weap;
}

Weapon HumanB::getWeapon( ) {
	return weapon_;
}