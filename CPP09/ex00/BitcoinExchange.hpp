#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <stdlib.h>

void	line_db_treatment(std::string line, std::map<const std::string, float> &rates);
void	line_input_treatment(std::string line, std::map<const std::string, float> rates);
int	date_analyser(std::string date);
int	amount_analyser(std::string amount);
int	line_analyser(std::string line);

#endif