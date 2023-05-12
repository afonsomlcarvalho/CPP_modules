#include "PhoneBook.h"

class Contact
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

public:
	int set_FirstName(std::string name);
	int set_LastName(std::string name);
	int set_Nickname(std::string name);
	int set_PhoneNumber(std::string number);
	int set_DarkestSecret(std::string secret);
	std::string	get_FirstName();
	std::string	get_LastName();
	std::string	get_Nickname();
	std::string	get_PhoneNumber();
	std::string	get_DarkestSecret();
};
