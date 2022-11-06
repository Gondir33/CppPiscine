#pragma once

#include <algorithm>
#include <cstdlib>
#include <stdexcept>

template <typename T>
int	easyFind( T container, int elem) {
	typename T::iterator	iter = std::find(container.begin(), container.end(), elem);

	if (iter == container.end()) {
		throw std::invalid_argument("no this argumenet in container");
	}
	return std::distance(container.begin(), iter);
}