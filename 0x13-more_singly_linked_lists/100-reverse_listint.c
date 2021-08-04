#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to a linked list.
 * Return: Pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *tmp = NULL;

	if (*head == NULL)
		return (NULL);

	if (!(*head)->next)
		return (*head);

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = new;
	}
	*head = tmp;

	return (*head);
}
