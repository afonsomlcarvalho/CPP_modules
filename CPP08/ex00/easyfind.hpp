#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

template <class T>
T<int>::iterator easyfind(T container, int look)
{
	T<int>::iterator it;

	it = std::find(container.begin(), container.end(), look);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif