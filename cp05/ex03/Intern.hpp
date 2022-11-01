#pragma once

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//should make destructor with no leaks but now I go pee

class Intern
{
private:

public:

	Form * makeForm ( const std::string& name, const std::string& target );
	Form * makePresidentialForm ( const std::string& target );
	Form * makeShrubberyForm ( const std::string& target );
	Form * makeRobotomyForm ( const std::string& target );
	
	class NoFormException : public std::exception {
		const char * what () const throw();
	};

	Intern(/* args */);
};
