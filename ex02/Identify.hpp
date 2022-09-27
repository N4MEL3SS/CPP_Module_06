#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate();

void identify(Base *p);
void identifyRef(Base &p);

#endif //IDENTIFY_HPP
