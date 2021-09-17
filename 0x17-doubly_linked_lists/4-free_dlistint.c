#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Double pointer to the head's node.
*/

void free_dlistint(dlistint_t *head)
{
	size_t size = 0;
	dlistint_t *tmp = NULL, *tmp_nx = NULL;

	if (!head)
		return;

	tmp = head;
	while (tmp)
	{
		tmp_nx = tmp;
		tmp = tmp->next;
		free(tmp_nx);
	}
}
