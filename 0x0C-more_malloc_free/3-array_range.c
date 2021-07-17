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
	int *str, i, j;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		str[i] = j;

	return (str);
}
