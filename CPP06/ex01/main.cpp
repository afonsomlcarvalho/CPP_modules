#include "Serializer.hpp"

int	main()
{
	Data *pepeta = new Data;
	Data *orlando;

	Serializer	serio;

	pepeta->content = "string";
	orlando = serio.deserialize(serio.serialize(pepeta));
	if (orlando == pepeta)
		std::cout << "ola" << std::endl;
	std::cout << orlando->content << std::endl;
	delete pepeta;
}