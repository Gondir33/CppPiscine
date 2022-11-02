#pragma once

#include <iostream>

template <typename Ptr_t>
void	iter(Ptr_t* start, std::size_t length, void (*f)(Ptr_t&)) {
	
	for (std::size_t i = 0; i < length; ++i) {
		f(*(start + i));
	}
}