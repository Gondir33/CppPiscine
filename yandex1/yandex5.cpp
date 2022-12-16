#include <iostream>

int main() {
	int K1, P1 = 1, N1 = 1, M, K2, P2, N2;
	std::cin >> K1 >> M >> K2 >> P2 >> N2;

	int k = 0;
	
	if (M == 1 && K2 / P2 == 1 && K2 % P2 == 0 && N2 == 1) {
		std::cout << 0 << ' ' << 1;
	} else if (K2 <= (M * (P2 - 1) + N2 - 1)) {
		std::cout << -1 << ' ' << -1;
	} else {
		while (K2 > (M * (P2 - 1) * k + (N2 - 1) * k))
			++k;
		--k;
		while (K1 > (M * k * P1))
			++P1;
		while (K1 > M * k * (P1 - 1) + N1 * k)
			++N1;
		std::cout << P1 << ' ' << N1;
	}
}