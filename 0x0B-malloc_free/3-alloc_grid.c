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

	str = malloc((height * sizeof(*str)));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = malloc((width * sizeof(**str)));
		if (str[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free(str[i]);
			free(str);
			return (NULL);
		}

	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			str[j][k] = 0;
		}
	}

	return (str);
}
