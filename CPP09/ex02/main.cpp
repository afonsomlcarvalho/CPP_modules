#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return 0;
	for (int i = 1; argv[i]; i++)
	{
		if (number_checker(argv[i]))
		{
			std::cout << "Invalid input" << std::endl;
			return 0;
		}
	}

	std::vector<int> vtr;
	for (int i = 1; argv[i]; i++)
		vtr.push_back(atoi(argv[i]));
	
	std::list<int> lst;
	for (int i = 1; argv[i]; i++)
		lst.push_back(atoi(argv[i]));
	
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = vtr.begin(); it != vtr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	clock_t	vstart = clock();
	sort_vector(vtr);
	clock_t	vend = clock();
	sort_list(lst);
	clock_t	lend = clock();


	std::cout << "After:  ";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vtr.size() << " elements with std::vector : " << (static_cast <float> (vend - vstart)) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
	std::cout << "Time to process a range of " << vtr.size() << " elements with std::list : " << (static_cast <float> (lend - vend)) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
}