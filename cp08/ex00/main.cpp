#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main( void )
{
	try {
		std::vector<int>	vec = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
		int idx = easyFind<std::vector<int>>(vec, 6);

		std::cout << vec[idx] << '\n';
	} catch(std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}