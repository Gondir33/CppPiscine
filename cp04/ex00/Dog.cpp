#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const {
	std::cout << "***WOOOOOOOOF***\n";
}

Dog::Dog(const Dog& copy) {
	type = copy.type;
}

Dog& Dog::operator=(const Dog& copy) {
	type = copy.type;

	return *this;
}