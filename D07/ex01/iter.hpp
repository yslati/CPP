#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <stdlib.h>

template<typename T>
void	iter(T *arr, int len, void (fun)(T i)) {
	for (int i = 0; i < len; i++) {
		fun(arr[i]);
	}
}


template<typename T>
void		Hello(T i) {
	std::cout << "Hello i: " << i << std::endl;
}

#endif