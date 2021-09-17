#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to a node's head.
 * @idx: Index of the list where the new node should be added. Starts at 0.
 * @n: Integer value of the new node.
 * Return: Address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	tmp = (*h);
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = new_node;
		else
		{
			new_node->next = (*h);
			tmp->prev = new_node;
			(*h) = new_node;
		}
		return (new_node);
	}
	for (i = 0; tmp->next || i + 1 == idx; i++)
	{
		if (i + 1 == idx)
		{
			if (tmp->next)
				tmp->next->prev = new_node;
			new_node->next = tmp->next;
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}