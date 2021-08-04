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
	listint_t *new, *tmp;
	unsigned int i = 1;

	if (!head)
		return (NULL);

	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);		
		i++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		tmp = new;
	}
	else if (tmp->next)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = NULL;
		tmp->next = new;
	}
	return (tmp);
}
