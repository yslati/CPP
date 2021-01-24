#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {

	if (ac < 4 || ac > 4) {
		std::cout << "wrong argument !!" << std::endl;
		return 1;
	}

	std::string		s1 (av[1]);
	std::string		s2 (av[2]);
	std::string		s3 (av[3]);

	std::string filename = "";
	std::ifstream	fin(s1);
	std::string		filestr;
	size_t			found;

	for (int i = 0; i < int(s1.length()); i++)
		filename += toupper(s1[i]);	
	filename = filename.substr(0, filename.find("."));
	filename.append(".replace");
	std::ofstream	fout(filename);

	if (fin.is_open()) {
		while (getline (fin, filestr)) {
			found = 0;
			while ((found = filestr.find(s2, found)) != std::string::npos) {
				filestr.replace(found, s2.length(), s3);
				found++;
			}
			fout << filestr << std::endl;
		}
	}
	else 
		std::cout << "wrong file !!" << std::endl;
	fin.close();
	fout.close();
	return 0;
}