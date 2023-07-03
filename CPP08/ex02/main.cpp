#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	MutantStack<int> mlstack = mstack;
	
	std::cout << mlstack.top() << std::endl;
	mstack.pop();
	std::cout << mlstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << *it << std::endl;
	it = mstack.end();
	std::cout << *it << std::endl;
}