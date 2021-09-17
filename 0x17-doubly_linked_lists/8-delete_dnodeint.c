#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at of a dlistint_t linked list.
 * @head: Double pointer to a node's head.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *nxt = NULL;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index - 1; i++, temp = temp->next)
	{
		if (!temp || !temp->next)
			return (-1);
	}
	nxt = temp->next->next;
	if (temp->next->next)
		temp->next->next->prev = temp;
	free(temp->next);
	temp->next = nxt;
	return (1);
}
