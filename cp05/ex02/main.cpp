#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int	main() {
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		PresidentialPardonForm	form("Butter");

		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		PresidentialPardonForm	form("Butter");

		form.beSigned(buer);
		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(24);
		PresidentialPardonForm	form("Butter");

		form.beSigned(buer);
		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		RobotomyRequestForm		form("Butter");

		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		RobotomyRequestForm		form("Butter");

		form.beSigned(buer);
		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(71);
		RobotomyRequestForm		form("Butter");

		form.beSigned(buer);
		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		ShrubberyCreationForm	form("Butter");

		form.beSigned(buer);
		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(1);
		ShrubberyCreationForm	form("Butter");

		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try {
		Bureaucrat				buer(144);
		ShrubberyCreationForm	form("Butter");

		form.execute(buer);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}