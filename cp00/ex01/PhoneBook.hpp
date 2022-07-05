#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	int		_contact_number;
	Contact	_contact[8];
public:
	void	add_new_contact(void);
	void	print_contact(void);

	PhoneBook();
};
#endif