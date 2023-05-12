#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	i = 0;
}

int	move_left(Contact *array)
{
	int	i = 0;
	
	while (i < 7)
	{
		array[i] = array[i + 1];
		i++;
	}
	return (7);
}

void PhoneBook::Add()
{
	std::string	input;
	if (i == 8)
		i = move_left(List);
	std::cout << "First Name: ";
	getline(std::cin, input);
	while (!List[i].set_FirstName(input))
	{
		std::cout << "First Name: ";
		getline(std::cin, input);
	}
	std::cout << "Last Name: ";
	getline(std::cin, input);
	while (!List[i].set_LastName(input))
	{
		std::cout << "Last Name: ";
		getline(std::cin, input);
	}
	std::cout << "Nickname: ";
	getline(std::cin, input);
	while (!List[i].set_Nickname(input))
	{
		std::cout << "Nickname: ";
		getline(std::cin, input);
	}
	std::cout << "Phone Number: ";
	getline(std::cin, input);
	while (!List[i].set_PhoneNumber(input))
	{
		std::cout << "Phone Number: ";
		getline(std::cin, input);
	}
	std::cout << "Darkest Secret: ";
	getline(std::cin, input);
	while (!List[i].set_DarkestSecret(input))
	{
		std::cout << "Darkest Secret: ";
		getline(std::cin, input);
	}
	i++;
}

void	display_string(std::string info)
{
	int	space;

	space = 10 - info.length();
	while (space > 0)
	{
		space--;
		std::cout << " ";
	}
	if (space < 0)
		std::cout << info.substr(0, 9) + ".|";
	else
		std::cout << info + "|";
}

int	index_treatment(int i)
{
	std::string index;

	std::cout << "Choose an index: ";
	std::getline(std::cin, index);
	if (index.empty() || index.length() > 1 || index.at(0) - '0' - 1 >= i || index.at(0) == '0')
	{
		std::cout << "Index must be a number between 1 and " << i << std::endl;
		return (index_treatment(i));
	}
	return (index.at(0) - '0' - 1);
}

void PhoneBook::Search()
{
	int	x = 0;

	if (i == 0)
	{
		std::cout << "There is no contact to be shown" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (x < i)
	{
		std::cout << "|         " << x + 1 << "|";
		display_string(List[x].get_FirstName());
		display_string(List[x].get_LastName());
		display_string(List[x].get_Nickname());
		std::cout << std::endl << "---------------------------------------------" << std::endl;
		x++;
	}
	x = index_treatment(i);
	std::cout << "First Name: " << List[x].get_FirstName() << std::endl;
	std::cout << "Last Name: " << List[x].get_LastName() << std::endl;
	std::cout << "Nickname: " << List[x].get_Nickname() << std::endl;
	std::cout << "Phone Number: " << List[x].get_PhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << List[x].get_DarkestSecret() << std::endl; 
}
