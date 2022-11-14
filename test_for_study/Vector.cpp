#include "Vector.hpp"

template <typename T>
T& Vector<T>::operator[](size_t idx) {
	return arr[idx];
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& copy) {
	
}

template <typename T>
Vector<T>::Vector(size_t sz, const T& value) : sz(sz) , cap(sz) {
	arr = new T[sz];
	for (int i = 0; i < sz; ++i) {
		arr[i] = value;
	}
}

template <typename T>
Vector<T>::Vector(const Vector& copy) : sz(copy.size()) , cap(copy.capacity()) {

}

template <typename T>
Vector<T>::~Vector() {
	delete []arr;
}

template <typename T>
void	Vector<T>::push_back( const T& value ) {
	
	if (sz == cap)	reserve(sz * 2);
	new(arr + sz) T(value);
	++sz;
}

template <typename T>
void	Vector<T>::pop_back( ) {
	(arr + sz - 1)->~T();
	--sz;
}
template <typename T>
void	Vector<T>::reserve( size_t n  ) {
	if (n <= cap)	return;
	
	// T* newarr = new T[n]; почему так нельзя? потому что может быть T каким то ресурсом, а я по факту создаю, то есть работает как sz;
	T* newarr = reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
	try {
		std::uninitialized_copy(arr, arr + sz, newarr);
	} catch (...) {
		delete[] reinterpret_cast<int8_t>(arr);
		throw;
	}
	/* size_t	i = 0;
	try {
		for (; i < sz; ++i) {
			new(newarr + i) T(arr[i]); // вызов конструктора по данному адресу;
			//newarr[i] = arr[i]; под newarr лежит reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
		}
	} catch(...) {
		while (i >= 0) {
			(newarr + i)->~T();
			--i;
		}
	} */

	for (size_t i = 0; i < sz; ++i) {
		(arr + i)->~T();
	}
	delete[] reinterpret_cast<int8_t>(arr);
	//delete []arr; segfault тут все capacity, но там не лежит реально capacity объектов типа T
	arr = newarr;
}

template <typename T>
void	Vector<T>::resize( size_t n, const T& value ) {
	if (n < sz) reserve(cap);
	if (n > sz) {
		for (size_t i = sz; i < n; ++i) {
			new(arr + i) T(value);
		}
	} else {
		for (size_t i = sz - 1; i > n - 1; --i ) {
			new (arr + i)->~T();
		}
	}
}

// vector <bool>

template <>
class Vector<bool> {

};