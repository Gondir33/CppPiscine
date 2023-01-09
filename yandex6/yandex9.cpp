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
	for (int i = 0; i < ans.size(); ++i)
		ans[i] = v[i + C - 1] - v[i];

	--R;
	for (int j = 0; j < R; ++j) {
		int min = ans[0], mini = 0;
		for (int i = 1; i < ans.size(); ++i) {
			if (min >= ans[i]) {
				min = ans[i];
				mini = i;
			}
		}
		int start = mini - C + 1;
		int end =  mini + C - 1;
		if (end < ans.size())
			ans.erase(ans.begin() + start, ans.begin() + end);
		else
			ans.erase(ans.begin() + start, ans.end());

	}
	int min = ans[0];
	for (int i = 1; i < ans.size(); ++i) {
		if (min > ans[i])
			min = ans[i];
	}
	std::cout << min;
}