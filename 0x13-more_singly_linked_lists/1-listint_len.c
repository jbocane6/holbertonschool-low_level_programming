#include "lists.h"

/**
 * listint_len - Show the number of elements in a linked listint_t list.
 * @h: Pointer to a linked list structure.
 * Return: The number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
