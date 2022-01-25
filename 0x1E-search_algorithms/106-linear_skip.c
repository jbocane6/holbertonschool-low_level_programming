#include "search_algos.h"

/**
 * linear_skip - Function that searches for a value
 * in a sorted skip list of integers.
 * As you see now, looking for a specific value in a singly linked list always
 * leads to browse every element of the list. A common way to optimize
 * the time complexity of a search in a singly linked list is to modify
 * the list itself by adding an “express lane” to browse it.
 * A linked list with an express lane is called a skip list.
 * This change does not come without consequences.
 * Indeed, the space complexity of a search in this kind of list will grow
 * as sizeof(skiplist_t) > sizeof(listint_t) (see example below).
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *down_pointer, *up_pointer;

	if (!list)
		return (NULL);

	down_pointer = list;
	up_pointer = list->express;

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       up_pointer->index, up_pointer->n);
		if (up_pointer->next &&
		    !(value >= down_pointer->n && value <= up_pointer->n))
		{
			down_pointer = up_pointer;
			if (up_pointer->express)
				up_pointer = up_pointer->express;
			else
			{
				for (; up_pointer->next; up_pointer = up_pointer->next)
					;
				break;
			}
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       down_pointer->index, up_pointer->index);

	for (; down_pointer; down_pointer = down_pointer->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       down_pointer->index, down_pointer->n);
		if (value == down_pointer->n)
			return (down_pointer);
	}
	return (NULL);
}
