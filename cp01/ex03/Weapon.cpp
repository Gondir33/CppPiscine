#include "Weapon.hpp"

Weapon::~Weapon() {
	
}

Weapon::Weapon( ) {
	this->type = "weapon";
}

Weapon::Weapon( std::string weap ) {
	this->type = weap;
}

void	Weapon::setType( std::string settype ) {
	this->type = settype;
}

std::string	Weapon::getType( ) {
	return this->type;
}