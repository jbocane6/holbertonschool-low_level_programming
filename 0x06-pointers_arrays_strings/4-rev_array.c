#include "holberton.h"

/**
 * reverse_array - Main function
 * Description: Reverses the content of an array of integers.
 * @a: An array of integers
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int cont = 0;
	int swap;
	int m = n - 1;

	while (cont <= (n / 2))
	{
		swap = a[cont];
		a[cont] = a[m - cont];
		a[m - cont] = swap;
		cont++;
	}
}
