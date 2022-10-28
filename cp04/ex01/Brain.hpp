#pragma once

#include <iostream>

class Brain
{
private:
	std::string ideas_[100];
public:


	void	set_idea(const std::string& idea, int pos);
	void	print_ideas(int start, int end = 100) const;

	Brain();
	~Brain();
};