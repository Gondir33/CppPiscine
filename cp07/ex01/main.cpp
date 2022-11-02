#include "iter.hpp"

template <typename T>
void	makePlus2(T& a) {
	a +=2;
}

int main() {
	int *a = new int[5];

	for (int i = 0; i < 5; ++i) {
		a[i] = i;
	}
	iter<int>(a, 5, &makePlus2<int>);
	for (int i = 0; i < 5; ++i) {
		std::cout << a[i] << std::endl;
	}
	delete []a;
}