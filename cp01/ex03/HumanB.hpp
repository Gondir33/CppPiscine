#ifndef HUMANB_CPP
# define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name_;
	Weapon		weapon_;

public:

	void	attack();

	void	setWeapon(Weapon& weap);
	Weapon	getWeapon();
	HumanB(std:: string name);
};

#endif