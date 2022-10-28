#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:

	void	makeSound() const;

	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);

	Dog(/* args */);
	~Dog();
};