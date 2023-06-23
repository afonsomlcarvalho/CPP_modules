#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &copia) {*this = copia;}

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &copia) {(void) copia; return *this;}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}