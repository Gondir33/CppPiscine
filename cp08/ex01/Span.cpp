#include "Span.hpp"

Span::Span(unsigned int N) {
	data.insert(N);
}

Span::~Span() {
	data.clear();
}

void			Span::addNumber(unsigned int N) {
	data.insert(N);
}

unsigned int	Span::shortestSpan() const {
	return *data.begin();
}

unsigned int	Span::longestSpan() const {
	return *--data.end();
}

Span::Span(const Span& copy) {
	data.insert(copy.shortestSpan());
	data.insert(copy.longestSpan());
}

Span& Span::operator=(const Span& copy) {
	data.insert(copy.shortestSpan());
	data.insert(copy.longestSpan());
	
	return *this;
}
