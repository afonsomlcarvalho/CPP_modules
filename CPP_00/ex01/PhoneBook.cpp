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
	if (i == 8)
		i = move_left(List);
	std::cout << "First Name: ";
	std::getline(std::cin, List[i].FirstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, List[i].LastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, List[i].Nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, List[i].PhoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, List[i].DarkestSecret);
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
		display_string(List[x].FirstName);
		display_string(List[x].LastName);
		display_string(List[x].Nickname);
		std::cout << std::endl << "---------------------------------------------" << std::endl;
		x++;
	}
	x = index_treatment(i);
	std::cout << "First Name: " << List[x].FirstName << std::endl;
	std::cout << "Last Name: " << List[x].LastName << std::endl;
	std::cout << "Nickname: " << List[x].Nickname << std::endl;
	std::cout << "Phone Number: " << List[x].PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << List[x].DarkestSecret << std::endl; 
}
