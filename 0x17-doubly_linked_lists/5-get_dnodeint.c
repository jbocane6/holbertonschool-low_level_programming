#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the node's head.
 * @index: Index of the node, starting from 0.
 * Return: nth node or null if it fails.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node = NULL;
	unsigned int position = 0;

	if (!head)
		return (NULL);
	new_node = head;
	while (new_node->next && position < index - 1)
	{
		new_node = new_node->next;
		position++;
	}
	if (position == index - 1)
	{
		return (new_node);
	}
	return (NULL);
}
