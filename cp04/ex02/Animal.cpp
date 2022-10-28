#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}
