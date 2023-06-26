#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void	swap(T &t1, T &t2)
{
	T	temp;

	temp = t1;
	t1 = t2;
	t2 = temp;
}

template <class T>
T	min(T t1, T t2)
{
	return (t1 < t2? t1:t2);
}

template <class T>
T	max(T t1, T t2)
{
	return (t1 > t2? t1:t2);
}

#endif