#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located. Otherwise-1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, right_index;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	for (index = 1; index < size && array[index] <= value; index *= 2)
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

	right_index = index < size - 1 ? index : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n",
	       index / 2, right_index);

	return (binary_search_helper(array, value, index / 2, right_index));
}

/**
 * binary_search_helper - The actual recursive binary search algorithm.
 * @array: The array to be searched.
 * @value: The value to be searched.
 * @left_index: The leftmost index of the subarray.
 * @right_index: The rightmost index of the subarray.
 *
 * Return: The index of the value searched if found. Return -1 otherwise.
 */
int binary_search_helper(int *array, int value,
			 size_t left_index, size_t right_index)
{
	size_t middle;

	if (left_index > right_index)
		return (-1);

	print_subarray(array, left_index, right_index);

	middle = (right_index + left_index) / 2;
	if (array[middle] < value)
		return (binary_search_helper(array, value, middle + 1, right_index));
	else if (array[middle] > value)
		return (binary_search_helper(array, value, left_index, middle - 1));
	else
		return (middle);
}

/**
 * print_subarray - Prints the elements of a given subarray
 * @array: The array to be printed.
 * @left_index: The left index of the subarray.
 * @right_index: The right index of the subarray.
 */
void print_subarray(int *array, size_t left_index, size_t right_index)
{
	printf("Searching in array: ");
	for (; left_index <= right_index; left_index++)
	{
		printf("%d", array[left_index]);
		if (left_index != right_index)
			printf(", ");
	}
	printf("\n");
}
