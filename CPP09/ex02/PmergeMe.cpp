#include "PmergeMe.hpp"

int	number_checker(std::string line)
{
	for (int i = 0; line[i]; i++)
	{
		if (!isdigit(line[i]))
			return (1);
	}
	return (0);
}

int listGet(int n, std::list<int> lst)
{
	std::list<int>::iterator it = lst.begin();
	for (int i = 0; i < n; i++)
		it++;
	return (*it);
}

void	insertPendList(int pend, std::list<int> &chain)
{
	std::list<int>::iterator	it;

	for (it = chain.begin(); it != chain.end() && pend > *it; it++) {}

	chain.insert(it, pend);
}

void	insertPendVector(int pend, std::vector<int> &chain)
{
	std::vector<int>::iterator	it;

	for (it = chain.begin(); it != chain.end() && pend > *it; it++) {}

	chain.insert(it, pend);
}

unsigned long int	next_jacobsthal(unsigned long int nbr)
{
	unsigned long int j = 1;
	unsigned long int	n = 2;

	while (j <= nbr)
	{
		j = 2 * j + (n % 2 == 0) - (n % 2 == 1);
		n++;
	}
	return (j);
}

unsigned long int	is_jacobsthal(unsigned long int nbr)
{
	unsigned long int j = 1;
	unsigned long int	n = 2;

	while (j < nbr)
	{
		j = 2 * j + (n % 2 == 0) - (n % 2 == 1);
		n++;
	}
	return (j == nbr || nbr == 0);
}

void	sort_vector(std::vector<int> &vtr)
{
	std::vector<int> main_chain;
	std::vector<int> pend;
	unsigned long int i;

	while (vtr.size() > 1)
	{
		std::pair<int,int> par(std::max(*vtr.begin(), *(vtr.begin() + 1)), std::min(*vtr.begin(), *(vtr.begin() + 1)));
		vtr.erase(vtr.begin(), vtr.begin() + 2);
		if (!main_chain.size())
		{
			main_chain.push_back(par.first);
			pend.push_back(par.second);
			continue ;
		}

		for (i = 0; i < main_chain.size() && par.first > main_chain[i]; i++) {}
		if (i == main_chain.size())
		{
			main_chain.push_back(par.first);
			pend.push_back(par.second);
			continue ;
		}
		main_chain.insert(main_chain.begin() + i, par.first);
		pend.insert(pend.begin() + i, par.second);
	}

	unsigned long int	jacobsthal = 1;

	while (main_chain.size() != 2 * pend.size())
	{
		if (jacobsthal > pend.size())
		{
			jacobsthal--;
			continue;
		}
		insertPendVector(pend[jacobsthal - 1], main_chain);
		jacobsthal--;
		if (is_jacobsthal(jacobsthal))
			jacobsthal = next_jacobsthal(next_jacobsthal(jacobsthal));
	}
	if (vtr.size())
		insertPendVector(vtr[0], main_chain);
	vtr = main_chain;
}

void	sort_list(std::list<int> &lst)
{
	std::list<int> main_chain;
	std::list<int> pend;
	std::list<int>::iterator it;
	std::list<int>::iterator it2;

	while (lst.size() > 1)
	{
		it = lst.begin();
		it2 = lst.begin();
		it2++;
		std::pair<int,int> par(std::max(*it, *it2), std::min(*it, *it2));
		it2++;
		lst.erase(it, it2);
		if (!main_chain.size())
		{
			main_chain.push_back(par.first);
			pend.push_back(par.second);
			continue ;
		}
		it2 = pend.begin();
		for (it = main_chain.begin(); it != main_chain.end() && par.first > *it; it++)
			it2++;
		if (it == main_chain.end())
		{
			main_chain.push_back(par.first);
			pend.push_back(par.second);
			continue ;
		}
		main_chain.insert(it, par.first);
		pend.insert(it2, par.second);
	}

	unsigned long int	jacobsthal = 1;

	while (main_chain.size() != 2 * pend.size())
	{
		if (jacobsthal > pend.size())
		{
			jacobsthal--;
			continue;
		}
		insertPendList(listGet(jacobsthal - 1, pend), main_chain);
		jacobsthal--;
		if (is_jacobsthal(jacobsthal))
			jacobsthal = next_jacobsthal(next_jacobsthal(jacobsthal));
	}

	if (lst.size())
		insertPendList(*lst.begin(), main_chain);
	lst = main_chain;
}

time_t	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000000 + time.tv_usec);
}
