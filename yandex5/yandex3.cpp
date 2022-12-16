#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

int main() {
	int 	N, tmp1, tmp2, M;
	std::cin >> N;
	std::unordered_map<int, int> mp;
	std::unordered_map<int, int> st;
	
	for (int i = 0; i < N; ++i) {
		std::cin >> tmp1;
		std::cin >> mp[tmp1];
	}
	std::cin >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> tmp1;
		std::cin >> st[tmp1];
	}
	for (auto& it : st) {
		
	}
}