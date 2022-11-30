#include <iostream>
#include <vector>
//template meta programming, SFINAE and compile-time computations

// Idea of SFINAE and simple example

/*
template <typename T>
auto	f(const T& ) ->decltype(T().size()) {// SFINAE moment compile try to understand which version of function is better
	std::cout << 1 << '\n';
	return 1;
}
/*
template <typename T>
auto	f(const T& ) { CE in this if T = int потому что в сигнатуре
	T	x;
	x.size()
	std::cout << 1 << '\n';
	return 1;
}
*/
/*
int	f(...) {
	std::cout << 2 << '\n';
	return 1;
}
*/

//std::enable_if, its usage and Implementation 


int main(int argc, char const *argv[])
{
	// std::vector<int>	v{1, 2, 3, 4};
	// f(5);
	return 0;
}