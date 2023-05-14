#include <iostream>
#include <fstream>

void	line_treatment(std::string *line, std::string s1, std::string s2)
{
	int	i = 0;
	int	j;
	std::string	sub;

	while (i < line->length())
	{
		if (line->at(i) == s1.at(0))
		{
			sub = line->substr(i, s1.length());
			if (!sub.compare(s1))
			{
				*line = line->substr(0, i) + s2 + line->substr(i + s1.length(), line->length() - i - s1.length());
				i += s1.length() - 1;
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
	filename = argv[1];
	filename.append(".replace");
	file.open(argv[1], std::ios::in);
	new_file.open(filename, std::ios::out);
	while (getline(file, line))
	{
		line_treatment(&line, (std::string)argv[2], (std::string)argv[3]);
		new_file << line << std::endl;
	}
	file.close();
	new_file.close();
}