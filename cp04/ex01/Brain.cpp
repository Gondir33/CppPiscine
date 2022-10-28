#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

void	Brain::set_idea(const std::string& idea, int pos) {
	ideas_[pos] = idea;
}
void	Brain::print_ideas(int start, int end) const {
	for (int i = start; i < end; ++i) {
		if (ideas_[i].empty() == false)
			std::cout << "Number of idea " << i + 1 << " idea " << ideas_[i] << std::endl;
	}
}