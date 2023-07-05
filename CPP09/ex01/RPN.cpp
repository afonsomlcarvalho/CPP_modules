#include "RPN.hpp"

int	line_analyser(std::string line)
{
	for (unsigned long int i = 0; i < line.length(); i++)
	{
		if (i % 2 == 0 && (!isdigit(line[i]) && line[i] != '/' && line[i] != '*' && line[i] != '-' && line[i] != '+'))
			return (1);
		if (i % 2 != 0 && line[i] != ' ')
			return (1);
	}
	return (0);
}

int	multiply(std::stack <int> &stack)
{
	if (stack.size() <= 1)
		return (1);
	int top = stack.top();
	stack.pop();
	int	top2 = stack.top();
	stack.pop();
	top2 *= top;
	stack.push(top2);
	return (0);
}

int	divide(std::stack <int> &stack)
{
	if (stack.size() <= 1)
		return (1);
	int top = stack.top();
	stack.pop();
	int	top2 = stack.top();
	stack.pop();
	top2 /= top;
	stack.push(top2);
	return (0);
}

int	add(std::stack <int> &stack)
{
	if (stack.size() <= 1)
		return (1);
	int top = stack.top();
	stack.pop();
	int	top2 = stack.top();
	stack.pop();
	top2 += top;
	stack.push(top2);
	return (0);
}

int	subtract(std::stack <int> &stack)
{
	if (stack.size() <= 1)
		return (1);
	int top = stack.top();
	stack.pop();
	int	top2 = stack.top();
	stack.pop();
	top2 -= top;
	stack.push(top2);
	return (0);
}

void	process_formula(std::string line)
{
	std::stack <int> stack;

	for (unsigned long int i = 0; i < line.length(); i++)
	{
		if (isdigit(line[i]))
			stack.push(line[i] - '0');
		if (line[i] == '*' && multiply(stack))
		{
			std::cout << "Invalid Formula" << std::endl;
			return;
		}
		if (line[i] == '/' && divide(stack))
		{
			std::cout << "Invalid Formula" << std::endl;
			return;
		}
		if (line[i] == '+' && add(stack))
		{
			std::cout << "Invalid Formula" << std::endl;
			return;
		}
		if (line[i] == '-' && subtract(stack))
		{
			std::cout << "Invalid Formula" << std::endl;
			return;
		}
	}
	if (stack.size() != 1)
		std::cout << "Invalid formula" << std::endl;
	else
		std::cout << stack.top() << std::endl;
}