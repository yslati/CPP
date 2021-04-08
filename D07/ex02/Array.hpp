#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <exception>
#include <sstream>

template<class T>
class Array {
	private:
		T*				_arr;
		unsigned int	_n;

	public:
		Array<T>(): _n(0) {
			_arr = new T[0];
			_arr[0] = 0;
		}
		Array<T>(unsigned int n): _n(n) {
			_arr = new T[n];
			for (unsigned int i = 0; i < n; i++) {
				_arr[i] = 0;
			}
		}
		Array<T> &operator=(Array<T> const & src) {
			if (this != &src) {
				if (_arr)
					delete [] _arr;
				_arr = new T[src._n];
				for (unsigned int i = 0; i < src._n; i++)
					_arr[i] = src._arr[i];
				_n = src._n;
			}
			return *this;
		}
		Array<T>(Array<T> const & src) {
			*this = src;
		}
		~Array<T>() {
			if (_arr)
				delete [] _arr;
		}

		T & operator[](unsigned int i) {
			if (i < 0 || i >= _n)
				throw OutOfLimit();
			return _arr[i];
		}

		unsigned int		size() const {
			return _n;
		}

		class OutOfLimit: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("the index is out of range");
				}
		};
};

#endif