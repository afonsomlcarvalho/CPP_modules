#include "BitcoinExchange.hpp"

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
	getline(input, line);
	while (getline(input, line))
	{
		line_input_treatment(line, rates);
	}
}
