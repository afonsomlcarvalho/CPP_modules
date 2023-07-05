#include "BitcoinExchange.hpp"

float	rate_finder(std::string date, std::map<const std::string, float> rates)
{
	float	rate;
	std::map<const std::string, float>::iterator it = rates.begin();

	for (it = rates.begin(); it != rates.end() && date > it->first; it++)
		rate = it->second;
	if (it == rates.end())
		return (0);
	return (rate);
}

void	line_db_treatment(std::string line, std::map<const std::string, float> &rates)
{
	std::string	date = line.substr(0, line.find(','));
	float	rate = atof((line.substr(line.find(',') + 1, line.length() - 1 - line.find(','))).c_str());

	rates.insert(std::pair<const std::string, float>(date, rate));
}

void	line_input_treatment(std::string line, std::map<const std::string, float> rates)
{
	if (line_analyser(line))
		return ;
	
	std::string	date = line.substr(0, 10);
	float	amount = atof((line.substr(13, line.length() - 13)).c_str());
	float	rate = rate_finder(date, rates);

	std::cout << date << " => " << amount << " = " << rate * amount << std::endl;
}

int	date_analyser(std::string date)
{
	if (date.length() != 10)
		return (1);
	for (int i = 0; i < 10; i++)
	{
		if ((i == 4 || i == 7) && date.at(i) != '-')
			return (1);
		else if (!(i == 4 || i == 7) && !isdigit(date.at(i)))
			return (1);
	}

	int	year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	if (year < 0 || month < 0 || day < 0 || month > 12 || day > 31)
		return (1);
	
	return (0);
}

int	amount_analyser(std::string amount)
{
	if (amount.find('.') != std::string::npos && amount.find('.') != amount.find_last_of('.'))
		return (1);
	for (long unsigned int i = ((amount.at(0) == '-' || amount.at(0) == '+') && amount.length() > 1); i < amount.length(); i++)
	{
		if (!isdigit(amount.at(i)) && amount.at(i) != '.')
			return (1);
	}
	
	float f = atof(amount.c_str());
	if (f < 0 || f > 1000)
		return (1);
	
	return (0);
}

int	line_analyser(std::string line)
{
	if (line.length() < 14 || line.substr(10, 3).compare(" | "))
	{
		std::cout << "Invalid line format" << std::endl;
		return (1);
	}
	if (date_analyser(line.substr(0, 10)))
	{
		std::cout << "Invalid date" << std::endl;
		return (1);
	}
	if (amount_analyser(line.substr(13, line.length() - 13)))
	{
		std::cout << "Invalid amount" << std::endl;
		return (1);
	}
	return (0);
}
