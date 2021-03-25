#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat b("Stive", 140);
		b.increment();
	}catch (Bureaucrat::GradeTooHighException & h) {
		std::cout << h.what() << std::endl;
	}catch (Bureaucrat::GradeTooLowException & l) {
		std::cout << l.what() << std::endl;
	}
	return 0;
}
