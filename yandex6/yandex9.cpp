#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N, R, C;
	std::cin >> N >> R >> C;
	std::vector<int>	v(N);
	std::vector<int>	ans(N - C + 1);
	for (auto& it : v)
		std::cin >> it;
	std::sort(v.begin(), v.end(), [](int a, int b) {
		return a < b;
	});
	



}