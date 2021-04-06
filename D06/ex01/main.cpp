#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sstream>

struct Data {
	int n;
	std::string *s1;
	std::string *s2;
}__attribute__((packed));

void*		serialize(void) {
	Data *data = new Data;
	data->s1 = new std::string("");
	data->s2 = new std::string("");
	std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	srand(time(NULL));

	data->n = rand() % 1337;
	for (int i = 0; i < 8; i++)
		*data->s1 += str[rand() % 62];
	for (int i = 0; i < 8; i++)
		*data->s2 += str[rand() % 62];

	return (reinterpret_cast<void *>(data));
}

Data*		deserialize(void * raw) {
	return (reinterpret_cast<Data*>(raw));
}

int			main() {
	Data *data = deserialize(serialize());

	std::cout << "size of Struct:\t\t" << sizeof(*data) << std::endl;

	std::cout << "S1 : " << data->s1 << "	string: " << *data->s1 << std::endl;
	std::cout << "S2 : " << data->s2 << "	string: " << *data->s2 << std::endl;
	std::cout << "Int: " << data->n << std::endl;

	delete data->s1;
	delete data->s2;
	delete data;

	return 0;
}
