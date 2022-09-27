#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t casted;

	casted = reinterpret_cast<uintptr_t>(ptr);

	return casted;
}

Data *deserialize(uintptr_t raw)
{
	Data *casted;

	casted = reinterpret_cast<Data*>(raw);

	return casted;
}
