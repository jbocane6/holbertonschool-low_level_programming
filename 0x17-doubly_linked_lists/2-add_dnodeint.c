#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head's node.
 * @n: Value of the new node.
 * Return: The address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL, *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	tmp_node = *head;
	*head = new_node;
	new_node->next = tmp_node;

	if (new_node->next)
		tmp_node->prev = *head;

	return (new_node);
}
