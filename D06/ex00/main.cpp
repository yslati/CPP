#include "conversion.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "invalid argument!" << std::endl;
		return (1);
	}
	try {
		conversion conv(av[1]);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
