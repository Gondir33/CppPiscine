#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	const static int	scav_hit_points_ = 100;
	const static int	scav_energy_points_ = 50;
	const static int	scav_attack_damage_ = 20;
public:
	void	guardGate( void );
	
	ScavTrap( const ScavTrap& );
	ScavTrap& operator=(const ScavTrap& );

	ScavTrap(const std::string& name = "Scav_name");
	~ScavTrap();
};
