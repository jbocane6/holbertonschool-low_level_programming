#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to a linked list.
 * Return: The result of the sum, 0 if error.
*/

int sum_listint(listint_t *head)
{
	int i = 0;

	if (!head)
		return (0);

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
