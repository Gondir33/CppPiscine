#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:

	virtual void	makeSound() const;
	std::string		getType() const;

	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);

	Animal(/* args */);
	virtual ~Animal();
};
