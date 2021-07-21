#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to a char array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * to compare values
 * Return: the index of the first element
 * for which the cmp function does not
 * return 0, if it fails, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				break;
			}

		}
	}

	return (i);
}
