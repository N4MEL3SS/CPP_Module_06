#include "Identify.hpp"

int main()
{
	Base *base;

	base = generate();
	identify(base);
	identifyRef(*base);

	delete base;
	return 0;
}
