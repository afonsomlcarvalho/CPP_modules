#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

struct NotFound : public std::exception
{
	const char * what () const throw () {
      return "Int not found.";
   	}
};

template <class T>
typename T::iterator easyfind(T container, int look)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), look);
	if (it == container.end())
		throw NotFound();
	return (it);
}

#endif