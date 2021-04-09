#ifndef EASYFIND_H
# define EASYFIND_H

#include <exception>
#include <list>
#include <iterator>
#include <iostream>

class NotFound: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Not Found");
		}
};

template<typename T>
int		easyfind(T & arr, int find) {
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), find);
	if (it != arr.end())
		return 1;
	throw NotFound();
}

#endif