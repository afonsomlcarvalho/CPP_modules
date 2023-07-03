#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	unsigned int		_size;
	std::vector<int>	_vec;

public:
	Span();
	Span(const Span &copia);
	Span(unsigned int N);
	~Span();
	const Span &operator=(const Span &copia);
	void	addNumber(int n);
	int	shortestSpan();
	int	longestSpan();
	void	addRange(std::vector<int> range);
	struct SpanFull;
	struct InsufficientNumbers;
};

#endif