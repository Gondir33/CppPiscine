#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( const std::string& target, const std::string& name) : Form(45, 72, target, name) { }

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if (getSign() == false) {
		throw Form::NotSignForExecuteException();
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowForExecuteException();
	} else {
		std::cout << "***CRACK CRACK BZZZ MAKING NOSIE***\n";
		if (std::rand() % 2 == 1) {
			std::cout << getTarget() << " has been robotomized successfully 50 %% of the time\n";
		} else {
			std::cout << getTarget() << " has been failed successfully 50 %% of the time\n";
		}
	}
}