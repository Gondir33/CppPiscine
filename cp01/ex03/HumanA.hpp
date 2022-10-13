#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon&		weapon;
	std::string	name;
public:

	void	attack(void);
	Weapon	getWeapon();
	void	setWeapon(Weapon waep);

	HumanA(std::string nam, Weapon &weap);
	~HumanA();
};
