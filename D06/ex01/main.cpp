#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sstream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::string*		randomstring() {

}

void*		serialize(void) {
	Data *data = new Data;

	std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	srand(clock());


	*data->s1 = randomString();
	*data->s2 = randomString();
	data->n = 10;
	std::stringstream ss;
	for (int i = 0; i < 8; i++) {
		ss << str[rand() % 62];
		// data->s1[i] = str[rand() % 62];
		// std::cout << data->s1[i] << std::endl;
	}
	ss >> data->s1;
		

	// data->n = 12;
	// data->s2 = new std::string[data->n];
	// for (int i = 0; i < data->n; i++) {
	// 	data->s2[i] = str[rand() % 62];
	// }
	// allocation Data
	// Allocation strings
	// 3mer s1, s2 and n , random values
	// cast Data to void *
	// return static_cast<void *>(i)
	
	return (reinterpret_cast<void *>(data));
}

Data*		deserialize(void * raw) {
// void *raw => Data *
	Data	*data = reinterpret_cast<Data*>(raw);
	return (data);
}

int			main() {

	Data *data = deserialize(serialize());
	std::cout << data->s1 << std::endl;
	// std::cout << *data->s1 << std::endl;
	// std::cout << data->s2 << std::endl;
	// std::cout << *data->s2 << std::endl;
	std::cout << data->n << std::endl;

	// delete data->s1;
	// delete data->s2;
	// delete data;
}