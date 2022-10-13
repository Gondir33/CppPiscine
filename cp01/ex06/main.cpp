#include "Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "bad input\n";
		return 1;
	}

	Harl	harl;
	harl.complain(argv[1]);
}