#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name_;
public:

	void whoAmI();

	void	attack( const std::string& target );

	DiamondTrap(const DiamondTrap& );
	DiamondTrap& operator=(const DiamondTrap& );

	DiamondTrap(const std::string& name);
	~DiamondTrap();
};