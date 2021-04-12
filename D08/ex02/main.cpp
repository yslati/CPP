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



	{
        std::cout << "\n\033[33mUSING LIST\033[0m" << std::endl;
		std::list<int> mylist;

		mylist.push_back(5);
		mylist.push_back(17);
		std::cout << "Top  ==> " << mylist.back() << std::endl;
		std::cout << "Size ==> " << mylist.size() << std::endl;
		mylist.pop_back();
		std::cout << "Size after pop ==> " << mylist.size() << std::endl;

		mylist.push_back(3);
		mylist.push_back(5);
		mylist.push_back(13);
		mylist.push_back(37);
		
		std::cout << "Top  ==> " << mylist.back() << std::endl;
		std::cout << "Size ==> "  << mylist.size() << std::endl;
		
		std::list<int>::iterator it = mylist.begin();
		std::list<int>::iterator ite = mylist.end();
		++it;
		--it;
		std::cout << "Elements: [  ";
		while (it != ite)
		{
			std::cout << *it << "  ";
			++it;
		}
		std::cout << "]" << std::endl;
		
		std::list<int> s(mylist);
	}

	return 0;
}