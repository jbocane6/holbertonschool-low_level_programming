#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located. Otherwise-1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_helper(array, value, 0, size - 1));
}

/**
 * binary_search_helper - The actual recursive binary search algorithm.
 * @array: The array to be searched.
 * @value: The value to be searched.
 * @left_idx: The leftmost index of the subarray.
 * @right_idx: The rightmost index of the subarray.
 *
 * Return: The index of the value searched if found. Return -1 otherwise.
 */
int binary_search_helper(int *array, int value,
			 size_t left_idx, size_t right_idx)
{
	size_t middle;

	if (left_idx > right_idx)
		return (-1);

	print_subarray(array, left_idx, right_idx);

	middle = (right_idx + left_idx) / 2;
	if (array[middle] < value)
		return (binary_search_helper(array, value, middle + 1, right_idx));
	else if (array[middle] > value)
		return (binary_search_helper(array, value, left_idx, middle - 1));
	else
		return (middle);
}

/**
 * print_subarray - Prints the elements of a given subarray
 * @array: The array to be printed.
 * @left_idx: The left index of the subarray.
 * @right_idx: The right index of the subarray.
 */
void print_subarray(int *array, size_t left_idx, size_t right_idx)
{
	printf("Searching in array: ");
	for (; left_idx <= right_idx; left_idx++)
	{
		printf("%d", array[left_idx]);
		if (left_idx != right_idx)
			printf(", ");
	}
	printf("\n");
}
