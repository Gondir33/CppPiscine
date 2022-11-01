#include "Form.hpp"

Form::Form ( int grade_to_execute, int grade_required, const std::string& target,  const std::string& name)
: name_(name)
, target_(target)
, grade_required_(grade_required)
, grade_to_execute_(grade_to_execute) {
	if (grade_to_execute > 150 || grade_required > 150) {
		throw Form::GradeTooLowException();
	} else if (grade_to_execute < 1 || grade_required < 1) {
		throw Form::GradeTooHighException();
	}
}

Form::Form ( const Form& copy )
: name_(copy.name_)
, target_(copy.target_)
, grade_required_(copy.grade_required_)
, grade_to_execute_(copy.grade_to_execute_)
, sign(copy.sign) { }

std::string	Form::getName( ) const {
	return name_;
}

int	Form::getGradeRequired( ) const {
	return grade_to_execute_;
}

int 	Form::getGradeToExecute( ) const {
	return grade_to_execute_;
}

bool	Form::getSign( )const {
	return sign;
}

std::ostream& operator<< ( std::ostream& os, const Form& data ) {
	os << "name: " << data.getName() << " grade_required: " << data.getGradeRequired() << " grade_to_execute: " << data.getGradeToExecute() << " signed " << data.getSign();
	return os;
}

Form&	Form::operator= ( const Form& copy ) {
	std::cout << "can't use = delete because of c++98 sad(\n";
	(void)copy;
	return *this;
}

void	Form::beSigned ( const Bureaucrat& bureaucrat) {
	if (grade_required_ > bureaucrat.getGrade())
		sign = true;
	else
		sign = false;
}

void	Form::signForm( const Bureaucrat& bureaucrat) {
	if (sign == true)
		std::cout << bureaucrat.getName() << " signed " << name_ << '\n';
	else
		std::cout << bureaucrat.getName() << " couldn't signed " << name_ << " because " << " grade is too low" << '\n';

}

const char* Form::GradeTooHighException::what( ) const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what( ) const throw() {
	return "Grade is too low";
}

const char* Form::GradeTooLowForExecuteException::what( ) const throw() {
	return "Grade for execute is too low";
}

const char* Form::NotSignForExecuteException::what( ) const throw() {
	return "Not get sign this Form";
}

std::string Form::getTarget() const {
	return target_;
}
