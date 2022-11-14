#include "Vector.hpp"

template <typename T, typename Alloc>
T& Vector<T, Alloc>::operator[](size_t idx) {
	return arr[idx];
}

template <typename T, typename Alloc>
Vector<T, Alloc >& Vector<T, Alloc>::operator=(const Vector& copy) {
	
}

template <typename T, typename Alloc>
Vector<T, Alloc>::Vector(size_t sz, const T& value, const Alloc& alloc_) : sz(sz) , cap(sz), alloc(alloc_) {

	arr = AllocTraits::allocate(alloc, sz);
	for (size_t i = 0; i < sz; ++i) {
		arr[i] = value;
	}
}

template <typename T, typename Alloc>
Vector<T, Alloc>::Vector(const Vector& copy) : sz(copy.size()) , cap(copy.capacity()) {

}

template <typename T, typename Alloc>
Vector<T, Alloc>::~Vector() {
	// delete []arr;
	AllocTraits::deallocate(alloc, arr, sz);
}

template <typename T, typename Alloc>
void	Vector<T, Alloc>::push_back( const T& value ) {
	
	if (sz == cap)	reserve(sz * 2);
	AllocTraits::construct(alloc, arr + sz, value);
	// new(arr + sz) T(value);
	++sz;
}

template <typename T, typename Alloc>
void	Vector<T, Alloc>::pop_back( ) {
	AllocTraits::destroy(alloc, arr + sz - 1);
	// (arr + sz - 1)->~T();
	--sz;
}
template <typename T, typename Alloc>
void	Vector<T, Alloc>::reserve( size_t n  ) {
	if (n <= cap)	return;
	
	// T* newarr = new T[n]; почему так нельзя? потому что может быть T каким то ресурсом, а я по факту создаю, то есть работает как sz;
	//T* newarr = reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
	//T* newarr = alloc.allocate(n);
	T* newarr = AllocTraits::allocate(alloc, n);

	/*try {
		// std::uninitialized_copy(arr, arr + sz, newarr);
		

	} catch (...) {
		//delete[] reinterpret_cast<int8_t>(arr);
		AllocTraits::deallocate(alloc, newarr, n);
		throw;
	}*/
	size_t	i = 0;
	try {
		for (; i < sz; ++i) {
			//new(newarr + i) T(arr[i]); // вызов конструктора по данному адресу;
			//newarr[i] = arr[i]; под newarr лежит reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
			AllocTraits::construct(alloc, newarr + i, arr[i]);
		}
	} catch(...) {
		while (i >= 0) {
			// (newarr + i)->~T();
			AllocTraits::destroy(alloc, newarr);
			--i;
		}
		//delete[] reinterpret_cast<int8_t>(arr);
		AllocTraits::deallocate(alloc, newarr, n);
		throw;
	}

	for (size_t i = 0; i < sz; ++i) {
		// (arr + i)->~T();
		AllocTraits::destroy(alloc, arr);
	}
	// delete[] reinterpret_cast<int8_t>(arr);
	AllocTraits::deallocate(alloc, newarr, n);
	//delete []arr; segfault тут все capacity, но там не лежит реально capacity объектов типа T
	arr = newarr;
}

template <typename T, typename Alloc>
void	Vector<T, Alloc>::resize( size_t n, const T& value ) {
	if (n < sz) reserve(cap);
	if (n > sz) {
		for (size_t i = sz; i < n; ++i) {
			AllocTraits::construct(alloc, arr + i, value);
			// new(arr + i) T(value);
		}
	} else {
		for (size_t i = sz - 1; i > n - 1; --i ) {
			AllocTraits::destroy(alloc, arr + i);
			// (arr + i)->~T();
		}
	}
}

// vector <bool> работает через _bit_reference

/*
template <typename T, typename Alloc = std::allocator<T>>
class list {
private:

	//struct Node{};
	std::allocator_traits<Alloc>::rebind_alloc<Node>	alloc;

public:
	list(const &Alloc alloc = Alloc()) : alloc(alloc) {};

};
*/