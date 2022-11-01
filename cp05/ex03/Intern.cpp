#include "Intern.hpp"

Form * Intern::makeForm( const std::string& name, const std::string& target ) {

	const std::string	names[3] = {	"shrubbery creation",
										"robotomy request",
										"presidential pardon" };

	Form * (Intern::* f[3])( const std::string& ) = {	&Intern::makeShrubberyForm,
														&Intern::makeRobotomyForm,
														&Intern::makePresidentialForm};
	
	for (int i = 0; i < 3; ++i) {
		if (name == names[i])
			return (this->*f[i])(target);
	}
	throw Intern::NoFormException();
}

Form * Intern::makePresidentialForm ( const std::string& target ) {
	PresidentialPardonForm* tmp = new PresidentialPardonForm(target);

	return tmp;
}

Form * Intern::makeShrubberyForm ( const std::string& target ) {
	ShrubberyCreationForm* tmp = new ShrubberyCreationForm(target);

	return tmp;
}

Form * Intern::makeRobotomyForm ( const std::string& target ) {
	RobotomyRequestForm* tmp = new RobotomyRequestForm(target);

	return tmp;
}

const char * Intern::NoFormException::what() const throw () {
	return "Not Find this Form";
}

Intern::Intern() {}