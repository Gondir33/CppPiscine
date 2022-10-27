#pragma once

#include <iostream>

class ClapTrap
{
protected:
	std::string		name_;
	int				hit_points_;
	int				energy_points_;
	int				attack_damage_;
public:

	ClapTrap( const ClapTrap& );
	ClapTrap& operator=( const ClapTrap& );

	void	attack( const std::string&	target );
	void	takeDamage( unsigned int	amount );
	void	beRepaired( unsigned int	amount );
	
	ClapTrap(const std::string& );
	~ClapTrap();
};
