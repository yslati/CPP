#include "span.hpp"

int main()
{
	Span sp = Span(6);
	// try {
	// 	sp.addNumber(1);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	sp.addNumber(-1);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// } catch(std::exception & e) {
	// 	std::cout << e.what() << std::endl;
	// }

	sp.addNumber(1, 10);
}
