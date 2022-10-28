#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound() const {
	std::cout << "***MEOOOOOOOOOOOOOW***\n";
}

Cat::Cat(const Cat& copy) {
	type = copy.type;
}

Cat& Cat::operator=(const Cat& copy) {
	type = copy.type;

	return *this;
}