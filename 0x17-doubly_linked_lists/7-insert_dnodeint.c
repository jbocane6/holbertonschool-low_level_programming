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
	dlistint_t *new_node = NULL, *tmp = NULL, *bef = NULL;
	unsigned int i;

	if (!h)
		return (NULL);

	for (i = 0, tmp = *h; tmp && i < idx; tmp = tmp->next, i++)
		bef = tmp;

	if (!tmp && i != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	tmp->prev = new_node;
	new_node->next = tmp;
	if (tmp->prev || !tmp)
	{
		new_node->prev = bef;
		bef->next = new_node;
	}
	return (new_node);
}
