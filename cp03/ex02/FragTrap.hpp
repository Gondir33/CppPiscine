#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	void highFivesGuys( void );

	FragTrap( const FragTrap& );
	FragTrap& operator=(const FragTrap& );
	FragTrap( const std::string& );
	~FragTrap();
};
