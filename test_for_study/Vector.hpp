#pragma once

#include <iterator>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <type_traits>
#include <algorithm>
#include <memory>


template <typename T, typename Alloc = std::allocator<T>>
class Vector {
private:
	T		*arr;
	size_t	sz;
	size_t	cap;
	Alloc	alloc;

	using AllocTraits = std::allocator_traits<Alloc>;
public:

	size_t	size() {
		return sz;
	}
	size_t	capacity() {
		return cap;
	}

	void	reserve( size_t n );
	void	resize( size_t n, const T& value = T() );
	void	push_back(const T& value);
	void	pop_back( );

	Vector(const Vector& copy);
	Vector& operator=(const Vector& copy);
	T&	operator[](size_t idx);

	Vector(size_t sz, const T& value = T(), const Alloc& alloc = Alloc());
	~Vector();
};


