#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template <class T>
class Array
{
	T *array;
	int _size;

public:
	Array()
	{
		array = new T[0];
		_size = 0;
	}

	Array(int n)
	{
		array = new T[n];
		_size = n;
	}

	Array(const Array &copia)
	{
		array = new T[copia._size];
		*this = copia;
	}

	Array &operator=(const Array &copia)
	{
		delete [] array;
		array = new T[copia._size];
		_size = copia._size;
		for (int i = 0; i < _size; i++)
			array[i] = copia.array[i];
		return (*this);
	}

	~Array()
	{
		delete [] array;
	}

	unsigned int size()
	{
		return (_size);
	}

	struct OutOfBounds : public std::exception
	{
		const char * what () const throw ()
		{
     		return "Index out of bounds";
   		}
	};

	T &operator[](int i)
	{
		
		if (i >= _size || i < 0)
			throw Array::OutOfBounds();
		return (array[i]);
	}
};

#endif