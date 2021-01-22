#include <iostream>
#include <cctype>
#include <cstring>

int		main(int ac, char **av) {
	if (ac > 1) {
		for (int i = 1 ; i < ac; i++) {
			for (int j = 0; j < int(strlen(av[i])); j++) {
				std::cout << char(toupper(av[i][j]));
			}
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
