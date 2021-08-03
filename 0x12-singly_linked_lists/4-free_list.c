#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to a linked list.
 * Return: 0
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);

	free(head->str);
	free(head);
}