#include <iostream>
#include <fstream>
#include <bitset>
#include <string>

void my_replace(const std::string& find, const std::string& replace, std::string& buffer) {

	size_t	pos = 0;

	while (pos < buffer.length()) {

		std::cout << find << "\n";
		pos = buffer.find(find, pos);
		if (std::string::npos == pos)	break;
		std::cout << pos << "\n";
		buffer.erase(pos, find.size());
		buffer.insert(pos, replace);
	}
	
}

bool tests_for_inout_file(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "input error, should <filename> <s1> <s2>\n";
		return 1;
	}

	std::ifstream infile;

	infile.open(argv[1]);
	if (infile.is_open() == false) {
		std::cout << "bad filename\n";
		infile.close();
		return 1;
	}
	infile.close();

	return 0;
}

int main(int argc, char **argv) {

	if (tests_for_inout_file(argc, argv) != 0)
		return 1;

	std::string		buffer;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		filename_in(argv[1]);
	std::string		filename_on = filename_in;
	std::ifstream	infile;
	std::ofstream	onfile;

	filename_on += ".replace";
	infile.open(filename_in.c_str());
	onfile.open(filename_on.c_str());
	while (std::getline(infile, buffer)) {
		my_replace(s1, s2, buffer);
		onfile << buffer << "\n";
	}
	infile.close();
	onfile.close();
	return 0;
}