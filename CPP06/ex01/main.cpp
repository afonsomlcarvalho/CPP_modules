#include "Serializer.hpp"

int	main()
{
	Data *pepeta = new Data;
	Data *orlando;

	Serializer	serio;

	orlando = serio.deserialize(serio.serialize(pepeta));
	if (orlando == pepeta)
		std::cout << "ola" << std::endl;
	orlando->content = "string";
	std::cout << orlando->content << std::endl;
	delete pepeta;
}