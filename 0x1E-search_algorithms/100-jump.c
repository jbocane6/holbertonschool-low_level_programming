#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located. Otherwise-1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, down_index, up_index;

	if (!array)
		return (-1);

	down_index = 0;
	up_index = step = sqrt(size);

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n", down_index, array[down_index]);
		if (up_index < size &&
		    !(value >= array[down_index] && value <= array[up_index]))
		{
			down_index = up_index;
			up_index += step;
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", down_index, up_index);

	for (; down_index < size; down_index++)
	{
		printf("Value checked array[%lu] = [%d]\n", down_index, array[down_index]);
		if (value == array[down_index])
			return (down_index);
	}
	return (-1);
}
