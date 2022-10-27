#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	void	guardGate( void );

	ScavTrap( const ScavTrap& );
	ScavTrap& operator=(const ScavTrap& );

	ScavTrap(const std::string& name = "noname");
	~ScavTrap();
};
