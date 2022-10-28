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