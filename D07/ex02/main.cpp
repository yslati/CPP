#include "Array.hpp"


int main()
{

    Array <int>A;
    Array<int>B(10);


    try {
        for (int i = 0; i < 10; i++){
            B[i] = i;
            std::cout << B[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl << e.what() << std::endl;
    }
    std::cout << "\n= = = = = = = = = =" << std::endl;


    A = B;
    for (unsigned int i = 0; i < A.size(); i++)
        std::cout << A[i] << " ";
    std::cout << "\n= = = = = = = = = =" << std::endl;
    try {
        for (int i = 0; i < 11; i++){
            A[i] = i * 2;
            std::cout << A[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }


    Array<double>C(10);
    try {
        for (int i = 0; i < 10; i++){
            C[i] = i * 1.1;
            std::cout << C[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
    std::cout << "\n= = = = = = = = = = = = = = = = = = = " << std::endl;

    Array<double> E;
	E = C;
     try {
        for (int i = 0; i < 11; i++){
            std::cout << E[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
	std::cout << std::endl;


	Array<double> D(10);
    try {
        for (int i = 0; i < 10; i++){
            std::cout << D[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
	std::cout << std::endl;
    return (0);
}