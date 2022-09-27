#ifndef SERIALIZATION_H
# define SERIALIZATION_H

# include <iostream>
# include <stdint.h>

struct Data
{
	std::string s;
	int			x;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif //SERIALIZATION_H
