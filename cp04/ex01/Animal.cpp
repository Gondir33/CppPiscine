#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound() const {
	std::cout << "***make noisy sound of common Animal***\n";
}

std::string	Animal::getType() const {
	return type;
}


Animal::Animal(const Animal& copy) {
	type = copy.type;
}
Animal& Animal::operator=(const Animal& copy) {
	type = copy.type;

	return *this;
}

void	Animal::set_idea(const std::string& idea, const int& pos) {
	(void)idea;
	(void)pos;
	std::cout << "no brain sry\n";
}
void	Animal::print_ideas(int start, int end) const {
	(void)start;
	(void)end;
	std::cout << "no ideas btw\n";
}