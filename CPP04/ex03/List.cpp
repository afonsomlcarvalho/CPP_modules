#include "List.hpp"

list	*createList()
{
	list *novo;

	novo = new list;
	novo->current = NULL;
	novo->next = NULL;
	return (novo);
}

list	*createNext(AMateria *materia)
{
	list	*novo;

	novo = new list;
	novo->current = materia;
	novo->next = NULL;
	return (novo);
}

void	add_materia(AMateria *materia)
{
	list *cur;

	if (!lista->current)
	{
		lista->current = materia;
		lista->next = NULL;
		return;
	}
	cur = lista;
	while (cur->next)
		cur = cur->next;
	cur->next = createNext(materia);
}

void	clear_materia()
{
	list *temp;

	while (lista)
	{
		if (!lista->current->getEquiped())
			delete lista->current;
		temp = lista->next;
		delete lista;
		lista = temp;
	}
}