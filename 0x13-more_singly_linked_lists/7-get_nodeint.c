#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to a linked list.
 * @index: Index of the node, starting at 0.
 * Return: Nth node or NULL if doesnt exists.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = NULL;

	if (!head)
		return (NULL);

	new = head;
	while (new)
	{
		if (i == index)
			return (new);
		new = new->next;
		i++;
	}

	return (NULL);
}
