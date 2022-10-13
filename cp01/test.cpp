#include <iostream>

bool	is_it_number(char c) {
	if (c >= '0' && c <= '9')
		return true;
	else
		return false;
}

int	find_next_comma(const std::string& s, int pos) {
	for (int i = pos; i <= s.size(); ++i) {
		if (s[i] == ',')
			return i;
	}
	return 0;
}

int	find_pos_comma(const std::string& s) {
	int	pos = find_next_comma(s, 0);
	
	while (is_it_number(s[pos - 1]) == false || is_it_number(s[pos + 1]) == false) {
		pos = find_next_comma(s, pos + 1);
	}
	return pos;
}

int	check_number_of_comma(const std::string& s){
	int number = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == ',')
			++number;
	}
	return number;
}

std::string	take_right(const std::string& s, int pos) {
	std::string	right;

	while (s[pos] >= '0' && s[pos] <= '9') {
		right.push_back(s[pos]);
		++pos;
	}
	return right;
}

std::string	take_left(const std::string& s, int pos) {
	std::string	left;
	
	while (s[pos] >= '0' && s[pos] <= '9') {
		--pos;
	}
	++pos;
	while (s[pos] >= '0' && s[pos] <= '9') {
		left.push_back(s[pos]);
		++pos;
	}
	return left;
}

std::string	max_or_min(const std::string& s, int pos) {
	std::string	max_min;

	while (s[pos] >= '0' && s[pos] <= '9') {
		--pos;
	}
	pos -= 3;
	max_min.push_back(s[pos++]);
	max_min.push_back(s[pos++]);
	max_min.push_back(s[pos++]);
	return max_min;
}

std::string	get_min_or_max(const std::string& max_min, 
							const std::string& left, 
							const std::string& right) {

	if (max_min == "max")
		return std::stoi(left) > std::stoi(right) ? left : right;
	else
		return std::stoi(left) > std::stoi(right) ? right : left;

}

int	find_pos_to_replace(const std::string& s, int pos) {
	--pos;
	while (s[pos] >= '0' && s[pos] <= '9') {
		--pos;
	}
	return pos - 3; 
}

int	size_to_replace(const std::string& s, int pos) {
	int	size = 5;

	--pos;
	while (s[pos] >= '0' && s[pos] <= '9') {
		--pos;
	}
	++pos;
	while (s[pos] >= '0' && s[pos] <= '9') {
		++pos;
		++size;
	}
	++size;
	++pos;
	while (s[pos] >= '0' && s[pos] <= '9') {
		++pos;
		++size;
	}
	return size;
}
void	change_string(std::string& s) {
	int			pos = find_pos_comma(s);
	std::string	left = take_left(s, pos - 1);
	std::string	right = take_right(s, pos + 1);
	std::string	max_min = max_or_min(s, pos - 1);
	std::string	replace = get_min_or_max(max_min, left, right);
	
	s = s.replace(find_pos_to_replace(s, pos), size_to_replace(s, pos), replace);
}

std::string	result(std::string& s) {
	while (check_number_of_comma(s) != 1) {
		change_string(s);
	}
	change_string(s);
	return s;
}

int main() {
	std::string	s;

	while (1) {
		std::cin >> s;
		if (s == "stop")
			break ;
		std::cout << s << " = ";
		std::cout << result(s) << '\n';
	}
}

/*
tests
max(1,5) = 5
max(4,min(3,6)) = 4
min(1,max(max(5,3),min(9,0))) = 1
min(max(1,max(5,3)),min(9,0)) = 0
*/