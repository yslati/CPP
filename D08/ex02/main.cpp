#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack Top: " << mstack.top() << std::endl;
	std::cout << "mstack size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "mstack size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << "print stack element: ";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << "print by reverse stack element: ";
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite) {
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;


	MutantStack<int>::const_iterator ee = mstack.begin();
	std::cout << "stack begining + 3 using const itirator: " << *(ee + 3) << std::endl;


	std::stack<int> s(mstack);
	return 0;
}