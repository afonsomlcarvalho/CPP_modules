#include <iostream>
#include <fstream>

void	line_treatment(std::string *line, std::string s1, std::string s2)
{
	size_t	i = 0;
	std::string	sub;

	while (i < line->length())
	{
		if (line->at(i) == s1.at(0))
		{
			sub = line->substr(i, s1.length());
			if (!sub.compare(s1))
			{
				*line = line->substr(0, i) + s2 + line->substr(i + s1.length(), line->length() - i - s1.length());
				i += s2.length() - 1;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (0);
	}

	std::ofstream	new_file;
	std::string		filename;
	std::ifstream	file;
	std::string		line;
	std::string		whole;

	filename = argv[1];
	filename.append(".replace");
	
	file.open(argv[1], std::ios::in);
	if (file.fail())
	{
		std::cout << "Error opening infile" << std::endl;
		return 1;
	}
	
	new_file.open(filename.c_str(), std::ios::out);
	if (new_file.fail())
	{
		std::cout << "Error opening outfile" << std::endl;
		return 1;
	}

	while (getline(file, line))
		whole = whole + line + "\n";
	if (!((std::string)argv[2]).empty())
		line_treatment(&whole, (std::string)argv[2], (std::string)argv[3]);
	new_file << whole;
	file.close();
	new_file.close();
}