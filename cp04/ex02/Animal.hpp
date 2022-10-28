#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:

	virtual void		makeSound() const = 0;
	virtual std::string	getType() const = 0;
	virtual void		set_idea(const std::string& idea, const int& pos) = 0;
	virtual void		print_ideas(int start, int end = 100) const = 0;

	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);

	Animal(/* args */);
	virtual ~Animal();
};
