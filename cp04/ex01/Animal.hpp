#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:

	virtual void		makeSound() const;
	virtual std::string	getType() const;
	virtual void		set_idea(const std::string& idea, const int& pos);
	virtual void		print_ideas(int start, int end = 100) const;

	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);

	Animal(/* args */);
	virtual ~Animal();
};
