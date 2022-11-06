#pragma once

#include <set>

class Span
{
private:

	std::set<unsigned int> data;

public:

	void			addNumber(unsigned int N);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	Span(const Span& copy);
	Span& operator=(const Span& copy);

	Span(unsigned int N);
	~Span();
};
