#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdlib.h>

template<class T>
class Array {
	private:
		T*				arr;
		unsigned int	_n;
		// Array<T>*	_next;
	public:
		Array<T>() {
			arr = new T[0];
			arr[0] = 0;
			_n = 0;
		}
		Array<T>(unsigned int n) {
			_n = n;
			arr = new T[n];
			for (int i = 0; i < n; i++) {
				arr[i] = 0;
			}
		}
		Array<T> &operator=(Array<T> const & src) {
			return *this;
		}
		Array<T>(Array<T> const & Array) {

		}
		~Array<T>() {

		}

		int		size() const {
			return n;
		}
};

#endif