#include "Example.h"

#include <iostream>
#include <ostream>

Example::Example() {
    std::cout << "Constructor" << std::endl;
}

Example::~Example() {
    std::cout << "Destructor" << std::endl;
}
