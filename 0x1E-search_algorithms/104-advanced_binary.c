#include "search_algos.h"

/**
 * advanced_binary - Function that searches for a value
 * in a sorted array of integers.
 * You may have noticed that the basic binary search does not necessarily
 * return the index of the first value in the array (if this value appears
 * more than once in the array).
 * In this exercise, you’ll have to solve this problem.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located. Otherwise-1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_helper(array, value, 0, size - 1));
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

	middle = (right_index + left_index) / 2;

	if (left_index == right_index)
	{
		if (array[middle] == value)
			return (middle);
		print_subarray(array, left_index, right_index);
		return (-1);
	}

	print_subarray(array, left_index, right_index);
	if (array[middle] < value)
		return (binary_search_helper(array, value, middle + 1, right_index));
	return (binary_search_helper(array, value, left_index, middle));
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
