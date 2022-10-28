#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:

	Brain*	brain;

public:

	void	makeSound() const ;

	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	
	virtual void		set_idea(const std::string& idea, const int& pos);
	virtual void		print_ideas(int start, int end = 100) const;

	Cat(/* args */);
	~Cat();
};
