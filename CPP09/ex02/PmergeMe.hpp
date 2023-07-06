#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h>
#include <algorithm>
#include <sys/time.h>

int	number_checker(std::string line);
void	sort_vector(std::vector<int> &vtr);
void	sort_list(std::list<int> &lst);
time_t	get_time(void);

#endif