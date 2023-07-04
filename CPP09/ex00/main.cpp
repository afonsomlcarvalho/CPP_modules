#include "BitcoinExchange.hpp"

void	line_db_treatment(std::string line, std::map<const std::string, float> &rates)
{
	std::string	date = line.substr(0, line.find(','));
	float	rate = atof((line.substr(line.find(',') + 1, line.length() - 1 - line.find(','))).c_str());

	rates.insert(std::pair<const std::string, float>(date, rate));
}

void	line_input_treatment(std::string line, std::map<const std::string, float> rates)
{
	std::string	date = line.substr(0, line.find('|') - 1);
	float	rate = atof((line.substr(line.find(',') + 1, line.length() - 1 - line.find(','))).c_str());
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 0;
	}

	std::ifstream	input;
	std::ifstream	database;
	database.open("data.csv", std::fstream::in);
	input.open(argv[1], std::fstream::in);

	std::map<const std::string, float> rates;

	std::string line;
	getline(database, line);
	while (getline(database, line))
		line_db_treatment(line, rates);
	while (getline(input, line))
	{
		line_input_treatment(line, rates);
	}
}