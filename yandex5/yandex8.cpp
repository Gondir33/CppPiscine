#include <iostream>
#include <unordered_map>

int main() {
	int n, k, indexL = 0, indexR = 0;
	std::cin >> n >> k;
	std::string	s;
	std::cin >> s;
	std::unordered_map<char, int>	dict;
	int l = 0;
	int r = 0;
	while (r < s.size()) {
		++dict[s[r]];
		if (dict[s[r]] > k) {
			if (r - l > indexR - indexL) {
				indexL = l;
				indexR = r;
			}
			while (dict[s[r]] > k) {
				--dict[s[l]];
				++l;
			}
		}
		++r;
	}
	std::cout << indexR - indexL << ' ' << indexL + 1;
}
