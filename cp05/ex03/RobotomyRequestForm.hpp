#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	/* data */
public:
	void	execute(Bureaucrat const & executor) const;

	RobotomyRequestForm( const std::string& target, const std::string& name = "Robotomy");
};