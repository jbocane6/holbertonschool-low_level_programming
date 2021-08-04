#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list.
 * @head: Pointer to a pointer to a linked list.
 * @index: index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	new = *head;
	tmp = new;

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (i < index)
	{
		if (!new->next)
			return (-1);
		tmp = new;
		new = new->next;
		i++;
	}

	tmp->next = new->next;
	free(new);
	return (1);
}
