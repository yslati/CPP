#include "conversion.hpp"

int check_char(std::string str) {
	double val = atof(str.c_str());
	std::stringstream ss;
	ss << val;

	if (str.length() == 1 && std::isprint(str[0]) && (str[0] > '9' || str[0] < '0'))
		return 0;
	else if (str.length() > 1 && (!val || (ss.str()).length() != str.length())) {
		std::cout << val << std::endl;
		std::cout << ss.str() << std::endl;
		return (1);
	}
	return 0;
}

// std::isprint('*')
int main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "invalid argument!" << std::endl;
		return (1);
	}
	if (check_char(av[1])) {
		std::cout << "wa chriif\n";
	} else {
		double val = atof(av[1]);
		std::cout << val << std::endl;
	}

	return (0);
}