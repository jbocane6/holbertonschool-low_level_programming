#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: pointer to an linked list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
    const list_t *list;
	size_t i = 0;

	list = h;
    
	while (list != NULL)
	{
        if (list->str == NULL)
            printf("[0] (nil)\n");
        else
        {
	    	printf("[%d] %s\n", list->len, list->str);
        }
		list = list->next;
		i++;
	}

	return (i);
}
