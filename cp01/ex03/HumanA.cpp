#include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string tmpname, Weapon& tmpweapon)
	: weapon(tmpweapon)
	, name(tmpname)
{ 

}


void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

Weapon	HumanA::getWeapon( ) {
	return weapon;
}

void	HumanA::setWeapon( Weapon weap) {
	this->weapon = weap;
}