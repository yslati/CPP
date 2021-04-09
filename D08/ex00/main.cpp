#include "easyfind.hpp"


int main() {
	std::list<int> l;
	for (int i = 0; i < 6; i++)
		l.push_back(i);
	std::list<int>::iterator it;
	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;
	std::list<int>::iterator a = std::find(l.begin(), l.end(), 10);
	std::cout << "hel : " << *a << std::endl;
	
	std::cout << easyfind(l, 5) << std::endl;
	return 0;
}