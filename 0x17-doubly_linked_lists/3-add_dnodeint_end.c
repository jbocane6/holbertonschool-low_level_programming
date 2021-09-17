#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head's node.
 * @n: Value of the new node.
 * Return: The address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL, *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp_node = *head;

	while (tmp_node && tmp_node->next)
		tmp_node = tmp_node->next;

	if (tmp_node)
	{
		new_node->prev = tmp_node;
		tmp_node->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
