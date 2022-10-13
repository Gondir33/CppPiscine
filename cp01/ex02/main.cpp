#include <iostream>
#include <string>

int	main()
{
	std::string		s("HI THIS IS BRAIN");
	std::string&	stringREF = s;
	std::string*	stringPTR = &s;

	std::cout << "String: " << &s << std::endl;
	std::cout << "StringPTR: " << &stringPTR << std::endl;
	std::cout << "StringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String: " << s << std::endl;
	std::cout << "StringPTR: " << stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;

}