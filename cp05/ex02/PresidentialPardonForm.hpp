#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	/* data */
public:
	void	execute(Bureaucrat const & executor) const;

	PresidentialPardonForm( const std::string& target, const std::string& name = "Presidental");
};