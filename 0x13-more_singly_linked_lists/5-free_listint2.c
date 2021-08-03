#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list sets head to NULL.
 * @head: Pointer to a linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *temp;

	if (!head)
		return;

	new = *head;

	while (new)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	*head = NULL;
}
