#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	tmp_line;

	std::cout << "Enter command:" << std::endl;
	while (1)
	{
		std::cin >> tmp_line;
		if (tmp_line == "EXIT")
			return 0;
		else if (tmp_line == "ADD")
			phonebook.add_new_contact();
		else if (tmp_line == "SEARCH")
			phonebook.print_contact();
		else
			std::cout << "Wrong argument: 'ADD'/'SEARCH'/'EXIT'" << std::endl;
		std::cout << "Enter command" << std::endl;
	}
}