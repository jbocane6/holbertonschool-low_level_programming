#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to a linked list.
 * @n: Integer value received.
 * Return: The address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *list = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->next = NULL;
	while (list->next != NULL)
		list = list->next;
	list->next = new;
	new = list;
	return (new);
}
