#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat b("Stive", 156);
		std::cout << b ;
		b.increment();
		std::cout << "After incrementing bureaucrat b\n" << b;
	}catch (std::exception &h) {
		std::cout << h.what() << std::endl;
	}
	return 0;
}
