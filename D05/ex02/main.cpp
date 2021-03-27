#include "Bureaucrat.hpp"

int main() {

	std::cout << "-------------- First part --------------" << std::endl;
	try {
		Bureaucrat max("Max", 40);
		std::cout << "test\n";
		Bureaucrat henery("Henery", 1);
		Form state("state", 12, 10);
		Form college("college", 70, 12);
		henery.signForm(state);
		max.signForm(state);
		max.increment(); 
		std::cout << "After incremeting " << max.getName() << "'s grade" << std::endl;
		std::cout << max;
		max.signForm(college);
		henery.decrement(); 
		std::cout << henery;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n-------------- Second part --------------" << std::endl;
	try {
		Bureaucrat max("Max", 100);
		Form college("college", 70, 12);
		std::cout << max;
		college.beSigned(max);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

