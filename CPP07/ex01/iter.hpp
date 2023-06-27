#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void	iter(T *array, unsigned int lenght, void (*f)(T *))
{
	unsigned int i = 0;

	while (i < lenght)
		f(&array[i++]);
}

#endif