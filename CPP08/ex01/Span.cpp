#include "Span.hpp"

struct Span::SpanFull : std::exception
{
	const char * what () const throw()
	{
		return ("Span is at full capacity.");
	}
};

struct Span::InsufficientNumbers : std::exception
{
	const char *what() const throw()
	{
		return ("Insufficient size to calculate span.");
	}
};

Span::Span()
{
	_size = 0;
}

Span::Span(const Span &copia)
{
	*this = copia;
}

Span::Span(unsigned int N)
{
	_size = N;
}

Span::~Span() {}

const Span &Span::operator=(const Span &copia)
{
	_size = copia._size;
	_vec = copia._vec;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_vec.size() == _size)
		throw Span::SpanFull();
	_vec.push_back(n);
}

int	Span::shortestSpan()
{
	if (_size <= 1)
		throw Span::InsufficientNumbers();

	std::vector<int> sorted = _vec;
	sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator	it = sorted.begin();
	int	min = -1;

	while (++it != sorted.end())
	{
		if (*it - *(it - 1) < min || min < 0)
			min = *it - *(it - 1);
	}

	return (min);
}

int	Span::longestSpan()
{
	if (_size <= 1)
		throw Span::InsufficientNumbers();

	return (*(max_element(_vec.begin(), _vec.end())) - *(min_element(_vec.begin(), _vec.end())));
}

void	Span::addRange(std::vector<int> range)
{
	if (_vec.size() + range.size() > _size)
		throw Span::SpanFull();

	_vec.insert(_vec.end(), range.begin(), range.end());
}
