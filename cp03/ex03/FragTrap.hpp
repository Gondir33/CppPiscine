#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	const static int	frag_hit_points_ = 100;
	const static int	frag_energy_points_ = 100;
	const static int	frag_attack_damage_ = 30;
public:

	void highFivesGuys( void );

	FragTrap( const FragTrap& );
	FragTrap& operator=(const FragTrap& );
	FragTrap( const std::string& name = "Frag_name");
	~FragTrap();
};
