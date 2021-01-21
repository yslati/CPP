#include <iostream>
#include <cctype>
#include <cstring>
// using namespace std;

int     main(int argc, char **argv){
    if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (int j = 0; j < str.length(); j++)
			{
				std::cout << char(toupper(argv[i][j]));
			}
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
    else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    return 0;
}