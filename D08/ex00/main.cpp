#include "easyfind.hpp"
#include <list>
#include <vector>

int		main(void)
{
	{
		std::vector<int> v;
		v.push_back(5);
		v.push_back(4);
		v.push_back(3);
		v.push_back(2);
		v.push_back(1);

		for (int i = 0; i < static_cast<int>(v.size()); i++)
			std::cout << v.at(i) << " ";
		std::cout << std::endl;
		try {
			std::cout << "found: " << easyfind(v, 5) << std::endl;
			std::cout << easyfind(v, 50) << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::list<int> l;
		srand(clock());
		for (int i = 0; i < 20; i++)
			l.push_back(rand() % 20);
		for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		try {
			std::cout << std::endl;
			std::cout << "found: " << easyfind(l, 15) << std::endl;
			std::cout << easyfind(l, 430) << std::endl;
			std::cout << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}