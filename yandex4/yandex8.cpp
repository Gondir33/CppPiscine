#include <iostream>
#include <unordered_map>

int main() {
	int	g, S, ans = 0, j;
	bool flag;
	std::string s;
	std::cin >> g >> S;
	std::unordered_map<char, int>	abc;
	std::cin >> s;
	for (int i = 0; i < s.size(); ++i)
		++abc[s[i]];
	std::cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		j = i;
		while (j < s.size() && abc[s[j]] != 0)
			--abc[s[j++]];
		--j;
		flag = true;
		for (auto& it : abc) {
			if (it.second != 0) {
				flag = false;
				break;
			}
		}
		if (flag == true)
			++ans;
		while (j >= i)
			++abc[s[j--]];
	}
	std::cout << ans;
}