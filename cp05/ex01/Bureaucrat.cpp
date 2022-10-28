#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, const std::string& name) : name_(name) {
	if (grade > lowestGrade) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < highestGrade) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		grade_ = grade;
	}
}

const std::string	Bureaucrat::getName() const {
	return name_;
}
int					Bureaucrat::getGrade() const {
	return grade_;
}

Bureaucrat&	Bureaucrat::operator++( ) {
	if (grade_ != highestGrade) {
		--grade_;
	} else {
		throw Bureaucrat::GradeTooHighException();
	}

	return *this;
}
Bureaucrat	Bureaucrat::operator++( int ) {
	Bureaucrat newBureaucrat = *this;

	operator++();

	return newBureaucrat;
}

Bureaucrat&	Bureaucrat::operator--( ) {
	if (grade_ != lowestGrade) {
		--grade_;
	} else {
		throw Bureaucrat::GradeTooLowException();
	}

	return *this;
}
Bureaucrat	Bureaucrat::operator--( int ) {
	Bureaucrat newBureaucrat = *this;

	operator--();

	return newBureaucrat;
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& data ) {
	os << data.getName() << ", bureaucrat grade " << data.getGrade();

	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high expression";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low expression";
}