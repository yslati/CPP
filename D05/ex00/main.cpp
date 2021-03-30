#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat b("Stive", 122);
		std::cout << b ;
		b.increment();
		std::cout << "After incrementing bureaucrat b\n" << b;
	}catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
