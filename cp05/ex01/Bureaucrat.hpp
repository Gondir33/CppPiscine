#pragma once

#include <iostream>

class Bureaucrat
{
private:

	const std::string	name_;
	int					grade_;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;

public:

	const std::string	getName() const;
	int					getGrade() const;

	Bureaucrat&	operator++( );
	Bureaucrat	operator++( int );

	Bureaucrat&	operator--( );
	Bureaucrat	operator--( int );
	

	class GradeTooHighException : public std::exception {
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char * what() const throw();
	};

	Bureaucrat( int grade, const std::string& name = "Bureaucrat");

};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& data );