#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:

	const std::string	name_;
	const int			grade_required_;
	const int			grade_to_execute_;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;
	bool				sign;

	Form&	operator= ( const Form& copy );
public:

	void	beSigned ( const Bureaucrat& );
	void	signForm ( const Bureaucrat& );

	std::string	getName( ) const;
	int			getGradeRequired( ) const;
	int 		getGradeToExecute( ) const;
	bool		getSign( ) const ;

	class GradeTooHighException : public std::exception {
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char * what() const throw();
	};

	Form ( const Form& copy );
	Form ( int grade_to_execute, int grade_required, const std::string& name = "Form" );
};

std::ostream& operator<< ( std::ostream& os, const Form& data );