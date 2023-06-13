#ifndef LIST_HPP
# define LIST_HPP

# include "AMateria.hpp"

class AMateria;

typedef struct list
{
	AMateria	*current;
	struct list	*next;
}	list;

extern list *lista;

void	add_materia(AMateria *materia);
void	clear_materia();
list 	*createList();

#endif