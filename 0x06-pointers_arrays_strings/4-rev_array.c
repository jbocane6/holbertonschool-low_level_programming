#include "holberton.h"

/**
 * reverse_array - Main function
 * Description: Reverses the content of an array of integers.
 * @a: An array of integers
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int cont;
	int swap;

	for (cont = 0;; cont <= (n / 2); cont++)
	{
		swap = a[cont];
		a[cont] = a[n - 1 - cont];
		a[n - 1 - cont] = swap;
	}
}
