#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to a linked list.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
