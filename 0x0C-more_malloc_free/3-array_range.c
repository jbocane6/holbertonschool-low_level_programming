#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
		return (NULL);

	if (min == max)
		str = malloc(sizeof(int) * (max - min + 1));

	str = malloc(sizeof(int) * (max - min + 2));

	if (str == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		str[i] = i;

	return (str);
}
