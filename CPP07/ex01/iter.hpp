#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string.h>

template<typename funcType>
void iter(void *array, size_t len, funcType func);

#endif