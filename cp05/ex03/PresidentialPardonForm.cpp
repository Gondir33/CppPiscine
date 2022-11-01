#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target, const std::string& name) : Form(5, 25, target, name) {}

void	PresidentialPardonForm::execute( const Bureaucrat& executor ) const {
	if (getSign() == false) {
		throw Form::NotSignForExecuteException();
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowForExecuteException();
	} else {
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
	}
}