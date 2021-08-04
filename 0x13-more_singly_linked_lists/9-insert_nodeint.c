#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to a linked list.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: Integer value received.
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = NULL;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (i < idx)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
