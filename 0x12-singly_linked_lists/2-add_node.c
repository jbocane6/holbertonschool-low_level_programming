#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to a linked list.
 * @str: Pointer to a char array.
 * Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	printf("[%d] %s\n", new->len, new->str);
	return (new);
}
