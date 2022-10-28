#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Dog* j = new Dog();
	Cat* i = new Cat();

	std::cout << std::endl;
	i->set_idea("my brain is so big", 50 - 1);
	i->set_idea("I am cat", 60 - 1);
	i->set_idea("I have a 9 lifes", 70 - 1);
	std::cout << std::endl;
	j->set_idea("my brain is bigger than cat", 50 - 1);
	j->set_idea("I am dog", 60 - 1);
	j->set_idea("I have only a 1 life", 70 - 1);
	std::cout << std::endl;
	i->print_ideas(50 - 1);
	std::cout << std::endl;
	j->print_ideas(50 - 1);
	std::cout << std::endl;
	delete j;
	delete i;

	return 0;
}