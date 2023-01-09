#include <iostream>
#include <vector>
#include <algorithm>

int find_index(std::vector<std::vector<int>> v, int val) {
	long	l = 0, r = v.size(), mid;
	while (l < r) {
		mid = (l + r) / 2;
		if (v[mid][0] >= val)
			r = mid;
		else
			l = mid + 1;
	}
	return l;
}

int main() {
	int n, m, a, b;
	std::cin >> n >> m;
	std::vector<std::vector<int>>	v(2 * n);
	std::vector<std::vector<int>>	cr(m);

	for (size_t i = 0; i < n * 2; i += 2) {
		std::cin >> a >> b;
		v[i] = {std::min(a, b), -1};
		v[i + 1] = {std::max(a, b), 1};
	}

	for (int i = 0; i < m; ++i) {
		std::cin >> a;
		cr[i] = {a, 0};
	}

	std::vector<std::vector<int>>	ans(cr);
	std::sort(v.begin(), v.end());
	std::sort(cr.begin(), cr.end());
	int j = 0, keep = 0;
	for (size_t i = 0; i < v.size(); ++i) {
		while (j < m && cr[j][0] < v[i][0]) {
			cr[j][1] = keep;
			++j;
		}
		if (j < m && cr[j][0] == v[i][0]) {
			if (v[i][1] == -1)
				++keep;
			cr[j][1] = keep;
			if (v[i][1] == 1)
				--keep;
			++j;
		} else {
			if (v[i][1] == -1)
				++keep;
			else
				--keep;
		}
	}
	while (j < m) {
		cr[j][1] = keep;
		++j;
	}
	for (int i = 0; i < m; ++i)
		std::cout << cr[find_index(cr, ans[i][0])][1] << ' ';
}