#include "search_algos.h"

/**
 * jump_list - Search for the first occurrence of a value on a singly-linked
 *             list using the jump search algorithm with the optimal step:
 *             sqrt(size).
 * You might think that linear search is not as effective
 * as any other algorithm, right? Well, we should see what happens
 * with a singly linked list.
 * @list: Pointer to the head of the list to search in.
 * @size: Nmber of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, otherwise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *down_pointer, *up_pointer;

	if (!list)
		return (NULL);

	step = sqrt(size);
	down_pointer = list;
	up_pointer = advance_n_nodes(list, step);

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       up_pointer->index, up_pointer->n);
		if (up_pointer->next != NULL &&
		    !(value >= down_pointer->n && value <= up_pointer->n))
		{
			down_pointer = up_pointer;
			up_pointer = advance_n_nodes(up_pointer, step);
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       down_pointer->index, up_pointer->index);

	for (; down_pointer != NULL; down_pointer = down_pointer->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       down_pointer->index, down_pointer->n);
		if (value == down_pointer->n)
			return (down_pointer);
	}
	return (NULL);
}

/**
 * advance_n_nodes - Advance n number of nodes on a singly-linked list.
 * @list: The current node.
 * @step: The steps needed to advance to the next node.
 *
 * Return: The pointer to the next node. If step goes beyond the length
 *         of the list, returns the last node.
 */
listint_t *advance_n_nodes(listint_t *list, size_t step)
{
	size_t counter;

	for (counter = 0; counter < step; counter++)
	{
		if (list->next)
			list = list->next;
		else
			break;
	}
	return (list);
}
