#include <iostream>
#include <vector>

#define	SIZE 1000000

int main() {
	int 	N, D;
	std::vector<int>	a(SIZE + 1);
	std::cin >> N >> D;
	int l, r;
	std::vector<int>	v(N);
	for (int i = 0; i < N; ++i)
		std::cin >> v[i];
	for (int i = 0; i < N; ++i) {
		l = 0;
		r = SIZE;
		if (v[i] - D > 0)
			l = v[i] - D;
		if (v[i] + D < SIZE)
			r = v[i] + D;
		while (l <= r) 
			++a[l++];
		v[i] = a[v[i]];
	}
	int max = v[0];
	for (int i = 1; i < N; ++i) {
		if (max < v[i])
			max = v[i];
	}
	std::cout << max << '\n';
	for (auto& it : v) {
		std::cout << it << ' ';
	}
}