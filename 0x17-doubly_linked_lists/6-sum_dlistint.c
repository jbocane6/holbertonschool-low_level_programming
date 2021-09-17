#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list.
 * @head: Double pointer to a node's head
 * Return: Returns the sum of all the data, if the list is empty, return 0.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	unsigned int result;

	if (!head)
		return (0);
	temp = head;
	for (result = 0; temp; temp = temp->next)
		result += temp->n;
	return (result);
}
