#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);
	
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nickname(std::string nickname);
	void		set_phone_number(std::string phone_number);
	void		set_darkest_secret(std::string darkest_secret);
};

#endif