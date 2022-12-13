#include <iostream>
#include <vector>

int main() {
	int N;
	std::cin >> N;
	std::vector<int>	v(N);
	for (auto& it : v)
		std::cin >> it;
	int max1 = INT32_MIN; 
	int max2 = INT32_MIN; 
	int max3 = INT32_MIN;
	int min = INT32_MAX;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > max1) {
			
		}
	}
}