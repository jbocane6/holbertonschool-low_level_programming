#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located. Otherwise-1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (1)
	{
		if (low == high)
		{
			if (value == array[low])
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));

		if (pos > high)
			break;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
