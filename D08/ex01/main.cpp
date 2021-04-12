#include "span.hpp"

void    printSpans(Span &sp)
{
	// shortestSpan
	try {
		std::cout << "=========> Shortest span : " << sp.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "ShortestSpan() ==> Error : " << e.what() <<  std::endl;
	}

	// longestSpan
	try {
		std::cout << "=========> Longest span  : " << sp.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "LongestSpan()  ==> Error : " << e.what() <<  std::endl;
	}
}

int main()
{
	{
		std::cout << "\n\033[33mTEST LONGEST/SHORTEST SPAN WITH 6 VALUES SPAN\033[0m" << std::endl;
		Span sp1 = Span(6);
		try {
			sp1.addNumber(1);
			sp1.addNumber(3);
			sp1.addNumber(17);
			sp1.addNumber(9);
			sp1.addNumber(11);
			sp1.addNumber(-1);
			printSpans(sp1);
		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}


	{
		std::cout << "\n\033[33mTEST LONGEST/SHORTEST SPAN WITH 10000 RANDOM VALUES SPAN\033[0m" << std::endl;
		Span sp = Span(10000);
		std::vector<long> v;
		srand(clock());
		for (int i = 0; i < 10000; i++)
			v.push_back(rand() % 10000);
		try {
			sp.addNumber(v.begin(), v.end());
			printSpans(sp);
		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}


	{
		std::cout << "\n\033[33mTEST LONGEST/SHORTEST SPAN WITH MIN/MAX VALUES SPAN\033[0m" << std::endl;
		Span shortSpan = Span(2);
		shortSpan.addNumber(2147483647);
		shortSpan.addNumber(-2147483648);
		printSpans(shortSpan);
	}
	return 0;
}
