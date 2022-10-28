#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called\n";
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "***MEOOOOOOOOOOOOOW***\n";
}

Cat::Cat(const Cat& copy) : Animal() {
	type = copy.type;
}

Cat& Cat::operator=(const Cat& copy) {
	type = copy.type;

	return *this;
}

void		Cat::set_idea(const std::string& idea, const int& pos) {
	brain->set_idea(idea, pos);
}
void		Cat::print_ideas(int start, int end) const {
	brain->print_ideas(start, end);
}