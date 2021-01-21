#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Pony {
	public:
		Pony();
		~Pony();
		void ponyOnTheHeap();
		void ponyOnTheStack();

	private:
		int h;
};

#endif