#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <chrono>


int main( void )
{
	auto start = std::chrono::system_clock::now();

	Span sp = Span(5);

	for (int i = 0; i < 10000; ++i) {
		sp.addNumber(std::rand() % 256);
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> diff = end - start;
	std::cout << "timing " << diff.count() << "s\n";

	return 0;
}
