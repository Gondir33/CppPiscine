#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target, const std::string& name ) : Form(137, 145, target, name) {}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	std::ofstream	file;

	if (getSign() == false) {
		throw Form::NotSignForExecuteException();
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowForExecuteException();
	} else {
			file.open((getTarget() + "_shrubbery").c_str());
			file << "                     .o00o\n\
                   o000000oo\n\
                  00000000000o\n\
                 00000000000000\n\
              oooooo  00000000  o88o\n\
           ooOOOOOOOoo  ```''  888888\n\
         OOOOOOOOOOOO'.qQQQQq. `8888'\n\
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n\
        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n\
         OOOOOOOOO QQQQQQQQQQ/ /QQ\n\
           OOOOOOOOO `QQQQQQ/ /QQ'\n\
             OO:F_P:O `QQQ/  /Q'\n\
                \\\\. \\ |  // |\n\
                d\\ \\\\\\|_////\n\
                qP| \\\\ _' `|Ob\n\
                   \\  / \\  \\Op\n\
                   |  | O| |\n\
           _       /\\. \\_/ /\\     _\n\
            `---__/|_\\   //|  __---'\n\
                  `-'  `-'`-'-'\n";
			file.close();
	}
}