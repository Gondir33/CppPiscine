#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:

	void	makeSound() const ;

	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	
	Cat(/* args */);
	~Cat();
};
