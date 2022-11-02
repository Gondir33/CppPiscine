#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T				*a;
	unsigned int	sz;
public:

	unsigned int	size();
	T& operator[](unsigned int idx);
	const T& operator[](unsigned int idx) const;
	Array<T>& operator=(const Array<T>& copy);
	Array(const Array<T>& copy);
	
	Array( unsigned int size = 0);
	~Array();
};


template <typename T>
Array<T>::Array(unsigned int size) : sz(size){
	a = new T[size];
}

template <typename T>
unsigned int Array<T>::size() {
	return sz;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx) {
	if (idx >= sz)
		throw std::out_of_range("out of range");
	return *(a + idx);
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const {
	if (idx >= sz)
		throw std::out_of_range("out of range");
	return *(a + idx);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
	sz = copy.size();
	a = new T[sz];
	for (int i = 0; i < sz; ++i) {
		a[i] = copy.a[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete a;
}
