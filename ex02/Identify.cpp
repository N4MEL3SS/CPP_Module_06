#include "Identify.hpp"

Base *generate()
{
	srand(time(NULL));
	Base	*generate;

	switch(rand() % 3)
	{
		case 0:
			generate = new A;
			std::cout << "Class A was created" << std::endl;
			break;
		case 1:
			generate = new B;
			std::cout << "Class B was created" << std::endl;
			break;
		case 2:
			generate = new C;
			std::cout << "Class C was created" << std::endl;
			break;
	}

	return generate;
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "Pointer is A class" << std::endl;
	if (b)
		std::cout << "Pointer is B class" << std::endl;
	if (c)
		std::cout << "Pointer is C class" << std::endl;
}

void identifyRef(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Reference is A class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Reference is B class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Reference is C class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
}
