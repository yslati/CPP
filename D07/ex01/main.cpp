#include "iter.hpp"



int main() {

	std::cout << "================ Int ================" << std::endl;
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	::iter(arr, 10, Hello);
	std::cout << "================ float ================" << std::endl;
	float flo[10] = {1.2,2.1,3.6,4.8,5.1,6.01,7.8,8.12,9.123,0.0001};
	::iter(flo, 10, Hello);
	std::cout << "================ char ================" << std::endl;
	char cha[10] = {'q','w','e','r','t','y','u','i','o','p'};
	::iter(cha, 10, Hello);

	return 0;
}