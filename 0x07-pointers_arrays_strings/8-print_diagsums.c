#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Main function
 * Description: function that prints the sum of the two diagonals.
 * @a: char pointer value
 * @size: integer value number
 */

void print_diagsums(int *a, int size)
{
	int i, suma_x = 0, suma_y = 0;

	for (i = 0; i < size; i++)
	{
		suma_x += a[i];
		suma_y += a[size - 1 - i];
		a = a + size;
	}
	printf("%d, %d\n", suma_x, suma_y);
}
