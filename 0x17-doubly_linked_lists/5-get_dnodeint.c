#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the node's head.
 * @index: Index of the node, starting from 0.
 * Return: nth node or null if it fails.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int position;

	if (!head)
		return (NULL);
	temp = head;
	for (position = 0; temp && position < index; temp = temp->next, position++)
		;
	return (temp);	
}
