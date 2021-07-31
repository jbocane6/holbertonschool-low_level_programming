#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to a linked list.
 * @str: Pointer to a char array.
 * Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *list = *head;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = size;

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
