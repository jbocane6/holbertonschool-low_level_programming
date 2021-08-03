#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a linked list.
 * Return: The head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (!*head)
		return (0);

	new = *head;
	n = new->n;

	*head = new->next;
	free(new);

	return (n);
}