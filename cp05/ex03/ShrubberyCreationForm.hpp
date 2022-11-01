#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	/* data */
public:

	void	execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm( const std::string& target, const std::string& name = "Shrubbery");
};
