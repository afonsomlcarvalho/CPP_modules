#include "PhoneBook.h"

int Contact::set_FirstName(std::string name)
{
	if (name.empty())
		return (0);
	FirstName = name;
	return (1);
}

int	Contact::set_LastName(std::string name)
{
	if (name.empty())
		return (0);
	LastName = name;
	return (1);
}

int	Contact::set_Nickname(std::string name)
{
	if (name.empty())
		return (0);
	Nickname = name;
	return (1);
}

int	Contact::set_DarkestSecret(std::string secret)
{
	if (secret.empty())
		return (0);
	DarkestSecret = secret;
	return (1);
}

int	Contact::set_PhoneNumber(std::string number)
{
	int	i = 0;
	if (number.empty())
		return (0);
	while (i < number.length())
	{
		if (!(number.at(i) >= '0' && number.at(i) <= '9'))
			return (0);
		i++;
	}
	PhoneNumber = number;
	return (1);
}

std::string	Contact::get_FirstName()
{
	return (FirstName);
}

std::string	Contact::get_LastName()
{
	return (LastName);
}

std::string	Contact::get_Nickname()
{
	return (Nickname);
}

std::string	Contact::get_PhoneNumber()
{
	return (PhoneNumber);
}

std::string	Contact::get_DarkestSecret()
{
	return (DarkestSecret);
}