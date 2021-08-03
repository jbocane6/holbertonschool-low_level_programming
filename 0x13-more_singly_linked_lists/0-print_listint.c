#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to a linked list structure.
 * Return: The number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t i;
	char c;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		c = h->n + '0';
		write(1, &c, 1);
		h = h->next;
		c = '\n';
		write(1, &c, 1);
	}
	return (i);
}
