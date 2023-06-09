#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		int ola[] = { 18, 32, 43, 54, 75};
		std::vector<int> ar(ola, ola + sizeof(ola) / sizeof(*ola));
		sp.addRange(ar);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(100000);
		for (int i = 100000; i > 0; i--)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}