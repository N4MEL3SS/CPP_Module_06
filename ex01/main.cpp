#include <iostream>
#include "Serialization.hpp"

int main()
{
	Data data;
	Data *recastData;
	uintptr_t raw;

	data.s = "Some serious data here!";
	data.x = 42;

	std::cout << "BEFORE SERIALIZE:" << std::endl;
	std::cout << "Memory address: " << &data << "\nString: " << \
		data.s << "\nInt: " << data.x << std::endl;


	raw = serialize(&data);
	recastData = deserialize(raw);
	std::cout << "\n-------------------\n";

	std::cout << "AFTER SERIALIZE:" << std::endl;
	std::cout << "Memory address: " << recastData << \
		"\nString: " << recastData->s << "\nInt: " << recastData->x << std::endl;

	return 0;
}
