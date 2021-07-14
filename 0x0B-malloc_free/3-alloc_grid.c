#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - concatenate two strings
 * @width: String one
 * @height: String two
 * Return: Both strings
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc((width * sizeof(*str)) + 1);
	for (i = 0; i < width; i++)
	{
		str[i] = malloc((height * sizeof(**str)) + 1);
	}
	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{

			str[j][k] = 0;
		}
		str[j][k] = '\0';
	}

	for (i = 0; i < height; i++)
		str[j][i] = '\0';

	return (str);
}
