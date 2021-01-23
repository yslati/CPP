#include "replace.hpp"


int main(int ac, char **av) {

	std::ifstream	ifile(av[1]);
	std::string		str;

	while (getline (ifile, str)) {
		std::cout << str << std::endl;
	}
	ifile.close();

	//===============


	std::ofstream	ofile("test.out");

	ofile << "yo yo what's up !!" << std::endl;
	ofile.close();

	return 0;
}