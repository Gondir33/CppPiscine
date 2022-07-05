#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_contact_number = 0;
}

void	PhoneBook::add_new_contact(void)
{
	Contact		contact;
	std::string	tmp_line;

	std::cout << "first name:" << std::endl;
	std::cin >> tmp_line;
	contact.set_first_name(tmp_line);
	std::cout << "last name:" << std::endl;
	std::cin >> tmp_line;
	contact.set_last_name(tmp_line);
	std::cout << "nickname:" << std::endl;
	std::cin >> tmp_line;
	contact.set_nickname(tmp_line);
	std::cout << "phone number:" << std::endl;
	std::cin >> tmp_line;
	contact.set_phone_number(tmp_line);
	std::cout << "darkest secret:" << std::endl;
	std::cin >> tmp_line;
	contact.set_darkest_secret(tmp_line);

	this->_contact[_contact_number % 8] = contact;
	++_contact_number;
}

void	output_line(std::string line, int flag)
{
	std::string tmp;

	if (flag == 0)
	{
		if (line.length() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << line << "|";
		}
		else
		{
			std::cout << std::setw(9);
			tmp = line.substr(0,9);
			std::cout << tmp << "." << "|";
		}
	}
	else
	{
		if (line.length() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << line << "|" << std::endl;
		}
		else
		{
			std::cout << std::setw(9);
			tmp = line.substr(0,9);
			std::cout << tmp << "." << "|" << std::endl;
		}
	}

}

void	print_one_contact(Contact contact)
{
	output_line(contact.get_first_name(), 0);
	output_line(contact.get_last_name(), 0);
	output_line(contact.get_nickname(), 0);
	output_line(contact.get_phone_number(), 1);
}

void	PhoneBook::print_contact(void)
{
	Contact contact;
	int		i;

	i = 0;
	std::cout << "Contacts:" << std::endl;
	while (i < 8 && i < this->_contact_number)
	{
		print_one_contact(this->_contact[i]);
		++i;
	}
	std::string	cmd;
	int			index;
	std::cout << "Index of contact:" << std::endl;
	std::cin >> cmd;
	index = cmd[0] - '0';
	if (index < this->_contact_number && \
		cmd.length() == 1)
		print_one_contact(this->_contact[index]);
	else
		std::cout << "Wrong index" << std::endl;
}