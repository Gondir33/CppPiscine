#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called\n";
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "***WOOOOOOOOF***\n";
}

Dog::Dog(const Dog& copy) : Animal(){
	type = copy.type;
}

Dog& Dog::operator=(const Dog& copy) {
	type = copy.type;

	return *this;
}

void		Dog::set_idea(const std::string& idea, const int& pos) {
	brain->set_idea(idea, pos);
}
void		Dog::print_ideas(int start, int end) const {
	brain->print_ideas(start, end);
}

std::string	Dog::getType() const {
	return type;
}