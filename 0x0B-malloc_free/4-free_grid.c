#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: String to free
 * @height: Size of quare array
 * Return: Free Matrix
 */
void free_grid(int **grid, int height)
{
	int i, j;
	int **str;

	if (grid == NULL || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
		free(str[i]);
	free(str);

	return (str);
}
