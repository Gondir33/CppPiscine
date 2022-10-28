#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat bureaucrat(170);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		Bureaucrat bureaucrat(0);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat bureaucrat(1);
		bureaucrat++;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat bureaucrat(150);
		bureaucrat--;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Bureaucrat bureaucrat(1);
		++bureaucrat;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat bureaucrat(150);
		--bureaucrat;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

		try {
		Bureaucrat bureaucrat(1);
		bureaucrat++;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat normal_bureaucrat(70);
		normal_bureaucrat--;
		normal_bureaucrat++;
		++normal_bureaucrat;
		--normal_bureaucrat;
		std::cout << normal_bureaucrat << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}