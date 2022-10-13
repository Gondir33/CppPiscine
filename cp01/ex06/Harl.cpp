#include "Harl.hpp"

void Harl::complain(std::string level) {
	std::string	info[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::* f[5])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::nothing};

	int i = 0;
	while (info[i] != level && i < 4) {
		i++;
	}
	switch (i)
	{
	case 3:
		(this->*f[i])();
		break;
	case 4:
		(this->*f[i])();
		break;
	default:
		while (i < 4) {
			(this->*f[i])();
			std::cout << "\n";
			++i;
		}
		break;
	}
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon ";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!\n";
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon ";
	std::cout << "cost more money. You don't put enough! If you did ";
	std::cout << "I would not have to ask for it!\n";
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some";
	std::cout << "extra bacon for free. I've been coming here for ";
	std::cout << "years and you just started working here last month\n";
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want ";
	std::cout << "to speak to the manager now.\n";
}

void	Harl::nothing( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}