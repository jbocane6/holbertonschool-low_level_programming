#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: pointer to an linked list
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *list;
	size_t i = 0;

	list = h;

	while (list != NULL)
	{
		list = list->next;
		i++;
	}

	return (i);
}
