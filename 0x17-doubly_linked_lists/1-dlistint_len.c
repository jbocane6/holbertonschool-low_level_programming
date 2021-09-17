#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the node's head
 * Return: Number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}