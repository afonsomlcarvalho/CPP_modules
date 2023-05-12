#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	Contact		contacto;
	PhoneBook	lista;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (!command.compare("SEARCH"))
			lista.Search();
		else if (!command.compare("ADD"))
			lista.Add();
		else if (!command.compare("EXIT"))
			break ;
		else if (!command.empty())
			std::cout << "Invalid command" << std::endl;
	}
}
