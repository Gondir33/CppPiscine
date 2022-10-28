#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

	Brain*	brain;

public:

	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);

	virtual void		set_idea(const std::string& idea, const int& pos);
	virtual void		print_ideas(int start, int end = 100) const;
	virtual void		makeSound() const;
	virtual std::string	getType() const;

	Dog(/* args */);
	~Dog();
};