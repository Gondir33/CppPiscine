#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main() {
	
	try {
		Intern some;
		Form * rrd;
		Bureaucrat tmp(1);


		rrd = some.makeForm("presidential pardon", "sad");
		rrd->beSigned(tmp);
		rrd->execute(tmp);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
		
	/*
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
	*/
}